#pragma once
#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;
class Worker
{
public:
	virtual void ShowInfo() = 0; //��ʾ������Ϣ
	virtual string GetDeptID() = 0; //��ȡ�������Ʊ��
	int m_ID; //ְ�����
	string m_Name;
	int m_DeptId; //ְ�����ڲ������Ʊ��
};

