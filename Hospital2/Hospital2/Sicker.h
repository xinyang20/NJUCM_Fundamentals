#pragma once
#include <iostream>
#include <string>
#include "log.h"
using namespace std;
class sicker
{
private:
	int ID;//���
	string Name;//����
	int Age;//����
	bool Sex;//�Ա�
public:
	sicker();//�޲ι���
	void add(int id, string name, int age, bool sex);//�������ߺ���
	void view();//�鿴����
	string get_name() { return Name; };//��ȡ��������
};
sicker::sicker()
{
	ID = -1;
	Name = "��";
	Age = -1;
	Sex = true;
}
void sicker::add(int id, string name, int age, bool sex)
{
	log_add("The function:sicker::add is start.");
	ID = id;
	Name = name;
	Age = age;
	Sex = sex;
	log_add("The function:sicker::add is finish.");
}
void sicker::view()
{
	log_add("The function:sicker::view is start.");
	cout << "ID:" << ID << endl;
	cout << "������" << Name << endl;
	cout << "���䣺" << Age << endl;
	cout << "�Ա�"; if (Sex)cout << "��"; else cout << "Ů" << endl;
	cout << endl;
	log_add("The function:sicker::view is finish.");
}