#pragma once
#include"worker.h"
#include<bits/stdc++.h>
using namespace std;
class Employee : public Worker
{
public:
	Employee(int id,string name,int dId);
	virtual void ShowInfo() ; //��ʾ������Ϣ
	virtual string GetDeptID() ; //��ȡ�������Ʊ��
};

