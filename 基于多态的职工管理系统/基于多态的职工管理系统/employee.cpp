#include<bits/stdc++.h>
#include"employee.h"
Employee::Employee(int id, string name, int dId)
{
	this->m_ID = id;
	this->m_Name = name;
	this->m_DeptId = dId;
}
void Employee::ShowInfo() //��ʾ������Ϣ
{
	cout << "ְ����ţ� " << this->m_ID
		<< " \tְ�������� " << this->m_Name
		<< " \t��λ��" << this->GetDeptID()
		<< " \t��λְ����ɾ�����������" << endl;
}
string Employee::GetDeptID() //��ȡ�������Ʊ��
{
	return string("Ա��");
}