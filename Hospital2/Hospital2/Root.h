#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include "log.h"
using namespace std;
string root_password;//管理员密码
void change_root_password()
{
	log_add("The function:change_root_password is start.");
	string in, in1, in2;
	cout << "请输入原密码：";
	cin >> in;
	while (in != root_password) {
		cout << "原密码错误，请重新输入：（退出请按-1）";
		cin >> in;
		if (in == "-1")return;
	}
	cout << "请输入新密码：";
	cin >> in1;
	cout << "请再次输入新密码：";
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
	else cout << "两次输入不一致，请重新设置。";
	log_add("The function:change_root_password is finish.");
}//更改管理员密码
void root_first()
{
	log_add("The function:root_first is start.");
	ifstream password("now_root_password.txt");
	password >> root_password;
	password.close();
	log_add("The function:root_first is finish.");
}//管理员初始化