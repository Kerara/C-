#pragma once
#include "SceneManager.h"
#include "DoubbleBuffer.h"

class System
{
public :
	static System* _instance;
	static System* getlnstance()
	{
		if (_instance == nullptr)
			_instance = new System;

		return _instance;
	}

public :
	void SetExit(BOOL done) { gameExit = done; }
	BOOL GetExit() { return gameExit; }

	void SetCollision(BOOL done) { gameCollision = done; }
	BOOL GetCollision() { return gameCollision; }

	void  SetScore(SHORT done) { gameScore = done; }
	SHORT GetScore() { return gameScore; }



	void Destroy()
	{
		if (m_pSM != nullptr) delete m_pSM;
		if (m_pDB != nullptr) delete m_pDB;
		if (_instance != nullptr)delete _instance;
	
	}

	DoubbleBuffer* GetDB()
	{
		if (m_pDB == nullptr)
			m_pDB = new DoubbleBuffer;

		return m_pDB;
	}
	
	SceneManager* GetSM()
	{
		if (m_pSM == nullptr)
			m_pSM = new SceneManager;

		return m_pSM;
	}

private:
	SceneManager* m_pSM = nullptr; //�� �Ŵ���
	DoubbleBuffer* m_pDB = nullptr; // ���� ����
	BOOL gameExit = FALSE; // ���� ����
	BOOL gameCollision = FALSE; // ���� ����
	SHORT gameScore = 0; // ��������
};