#include <iostream>
#include "CharacterInfo.h"
#include "Inventory.h"
#pragma warning (disable : 4996)

using namespace std;

class SystemManger
{
private :
	static SystemManger* _instance;
	
	CharacterInfo* m_pChar = nullptr;
	Inventory* m_plnven = nullptr;
public:

	void Destroy()
	{
		if (m_pChar != nullptr) delete m_pChar;
		if (m_pChar != nullptr) delete m_plnven;
		if (m_pChar != nullptr) delete _instance;
	}
	static SystemManger* getlnstance()
	{
		if (_instance == nullptr)
			_instance = new SystemManger;

		return _instance;
	}

	CharacterInfo* GetCharacterInfo()
	{
		if (m_pChar == nullptr)
			m_pChar = new CharacterInfo;

		return m_pChar;
	}

	Inventory* GetInventory()
	{
		if (m_plnven == nullptr)
			m_plnven = new Inventory;

		return m_plnven;
	}
	void Print()
	{
		cout << " name ?" << m_pChar->name << endl;
		cout << " gold ?" << m_plnven->gold << endl;
	}
};

SystemManger* SystemManger::_instance = nullptr;

int main_디자인패턴2()
{
	strcpy(SystemManger::getlnstance()->GetCharacterInfo()->name,"강아지");
	SystemManger::getlnstance()->GetInventory()->gold = 1000;

	SystemManger::getlnstance()->Print();

	SystemManger::getlnstance()->Destroy();
	return 0;
}