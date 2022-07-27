#include "샘플클래스.h"

void 샘플클래스::PrintRank()
{
	if (m_Score >= 95)		      cout << m_Name << "의 등급은 ? A+" << endl;
	else if (m_Score >= 90)       cout << m_Name << "의 등급은? A" << endl;
	else if (m_Score >= 85)       cout << m_Name << "의 등급은? B+" << endl;
	else if (m_Score >= 80)       cout << m_Name << "의 등급은? B" << endl;
	else if (m_Score >= 75)       cout << m_Name << "의 등급은? C+" << endl;
	else if (m_Score >= 70)       cout << m_Name << "의 등급은? C" << endl;
	else if (m_Score >= 65)       cout << m_Name << "의 등급은? D+" << endl;
	else if (m_Score >= 60)       cout << m_Name << "의 등급은? D" << endl;
	else					      cout << m_Name << "의 등급은? F" << endl;

}

샘플클래스::샘플클래스()
{

}

샘플클래스::~샘플클래스()
{

}