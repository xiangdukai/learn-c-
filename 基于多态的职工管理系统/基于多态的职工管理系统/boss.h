#pragma once
#include<bits/stdc++.h>
#include"worker.h"
using namespace std;

class Boss : public Worker
{
public:
	Boss(int id, string name, int dId);
	virtual void ShowInfo() ; //��ʾ������Ϣ
	string GetDeptID() ; //��ȡ�������Ʊ��
	
};