#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include "log.h"
using namespace std;
string root_password;//����Ա����
void change_root_password()
{
	log_add("The function:change_root_password is start.");
	string in, in1, in2;
	cout << "������ԭ���룺";
	cin >> in;
	while (in != root_password) {
		cout << "ԭ����������������룺���˳��밴-1��";
		cin >> in;
		if (in == "-1")return;
	}
	cout << "�����������룺";
	cin >> in1;
	cout << "���ٴ����������룺";
	cin >> in2;
	if (in1 == in2) {
		root_password = in1;
		ofstream password("root_password_history.txt", ios::app);
		password << in1 << endl;
		password.close();
		ofstream pass("now_root_password.txt");
		pass << in1 << endl;
		pass.close();
	}
	else cout << "�������벻һ�£����������á�";
	log_add("The function:change_root_password is finish.");
}//���Ĺ���Ա����
void root_first()
{
	log_add("The function:root_first is start.");
	ifstream password("now_root_password.txt");
	password >> root_password;
	password.close();
	log_add("The function:root_first is finish.");
}//����Ա��ʼ��