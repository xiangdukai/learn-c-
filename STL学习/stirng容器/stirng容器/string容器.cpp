#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

//string�����Ĺ��캯��
void test01()
{
	string s1;//�޲ι���
	cout << s1 << endl;
	const char* str = "hello world!";
	string s2(str);
	cout << s2 << endl;
	string s3(s2);//��������
	cout << s3 << endl;
	string s4(5, 'a');
	cout << s4 << endl;
}

//string������ֵ
void test02()
{
	string s1;
	s1 = "hello world!";
	cout << s1 << endl;

	string s2;
	s2 = s1;
	cout << s2 << endl;

	string s3;
	s3 = 'a';
	cout << s3 << endl;

	string s4;
	s4.assign("hello c++");
	cout << s4 << endl;

	string s5;
	s5.assign("hello c++",5);
	cout << s5 << endl;

	string s6;
	s6.assign(s4);
	cout << s6 << endl;

	string s7;
	s7.assign(5,'a');
	cout << s7 << endl;
}

//string����ƴ��
void test03()
{
	string s("I");
	s += " love game : ";
	s.append("LOL PVZ", 4);//���ַ���s��ǰn���ַ����ӵ���ǰ�ַ�����β
	s.append("LOL PVZ", 4, 3);//�ַ���s�д�pos��ʼ��n���ַ����ӵ��ַ�����β
	cout << s << endl;
}

//stirng�е�find��replace
void test04()
{
	string s("asdfgjkldf");
	int pos = s.find("df");
	if (pos == -1)
	{
		cout << "δ�ҵ�\n";
	}
	else 
	{
		cout << pos << endl;
	}

	int rpos = s.rfind("df");
	if (rpos == -1)
	{
		cout << "δ�ҵ�\n";
	}
	else
	{
		cout << rpos << endl;
	}

	s = s.replace(1, 3, "12345");
	cout << s << endl;
}

int main()
{
	//test01();
	//test02();
	//test03();
	test04();
}