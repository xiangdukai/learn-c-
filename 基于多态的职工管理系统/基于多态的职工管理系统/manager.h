#pragma once
#include<bits/stdc++.h>
#include"worker.h"
using namespace std;

class Manager : public Worker
{
public:
	Manager(int id, string name, int dId);
	virtual void ShowInfo(); //��ʾ������Ϣ
	virtual string GetDeptID(); //��ȡ�������Ʊ��

};
