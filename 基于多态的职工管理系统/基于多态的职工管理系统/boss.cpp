#include"boss.h"
using namespace std;
Boss::Boss(int id, string name, int dId)
{
	this->m_ID = id;
	this->m_Name = name;
	this->m_DeptId =dId;
}
void Boss::ShowInfo() //��ʾ������Ϣ
{
	cout << "ְ����ţ� " << this->m_ID
		<< " \tְ�������� " << this->m_Name
		<< " \t��λ��" << this->GetDeptID()
		<< " \t��λְ�𣺹���˾��������" << endl;
}
string Boss::GetDeptID() //��ȡ�������Ʊ��
{
	return "�ϰ�";
}