#pragma once
#include <iostream>
#include <string>
#include "log.h"
using namespace std;
class sicker
{
private:
	int ID;//编号
	string Name;//姓名
	int Age;//年龄
	bool Sex;//性别
public:
	sicker();//无参构造
	void add(int id, string name, int age, bool sex);//新增患者函数
	void view();//查看函数
	string get_name() { return Name; };//获取姓名函数
};
sicker::sicker()
{
	ID = -1;
	Name = "无";
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
	cout << "姓名：" << Name << endl;
	cout << "年龄：" << Age << endl;
	cout << "性别："; if (Sex)cout << "男"; else cout << "女" << endl;
	cout << endl;
	log_add("The function:sicker::view is finish.");
}