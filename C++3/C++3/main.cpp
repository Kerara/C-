#include "System.h"
#include "SceneDefine.h"

System* System::_instance = nullptr;
void lnit();

int main()
{
	//���Ǵ��� / ���� ���� ���� , �ʱ�ȭ
	lnit();
	while (!System::getlnstance()->GetExit())
	{
		System::getlnstance()->GetDB()->ClearBuffer();

		System::getlnstance()->GetSM()->Render(DELTATIME);
		System::getlnstance()->GetSM()->Update(DELTATIME);

		System::getlnstance()->GetDB()->FlippingBuffer();
	}

	//���α׷� ����
	System::getlnstance()->Destroy();
	return 0;
}

void lnit()
{
	// �ý��� �Ŵ��� ���� , ���� ���� ���� / �ʱ�ȭ
	System::getlnstance()->GetDB()->CreateBuffer(CONSOLE_MAX_WIDTH, CONSOLE_MAX_HEIGHT);

	//���Ŵ��� ���� / �ʱ�ȭ
	System::getlnstance()->GetSM()->RegisterScene("MenuScene", new MenuScene); // �޴� �� ����
	System::getlnstance()->GetSM()->RegisterScene("GameScene", new GameScene); // �޴� �� ����
	//�� ���
	System::getlnstance()->GetSM()->reserveChangeScene("MenuScene"); //�޴� ��  ����


}