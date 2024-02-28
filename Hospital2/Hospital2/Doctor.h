#pragma once
#include <iostream>
#include <string>
#include "log.h"
using namespace std;
class doctor
{
private:
	int ID;//编号
	string Name;//姓名
	int Age;//年龄
	string Zhicheng;//职称
	string Keshi;//科室
	string Jianjie;//简介
public:
	int beforenoon;//上午剩余号量
	int afternoon;//下午剩余号量
	doctor();//无参构造
	void add(int id, string name, int age, string zhicheng, string keshi, string jianjie, int shangwu_last, int xiawu_last);//医生增加
	void view();//查看函数
	string get_name() { return Name; };//名字获取
	string get_keshi() { return Keshi; };//科室获取
	string get_zhicheng() { return Zhicheng; };//职称获取
};
doctor::doctor()
{
	ID = -1;
	Name = "无";
	Age = -1;
	Zhicheng = "无";
	Keshi = "无";
	Jianjie = "无";
	beforenoon = 30;
	afternoon = 30;
}
void doctor::add(int id, string name, int age, string zhicheng, string keshi, string jianjie, int shangwu_last = 30, int xiawu_last = 30)
{
	log_add("The function:doctor::add is start.");
	ID = id;
	Name = name;
	Age = age;
	Zhicheng = zhicheng;
	Keshi = keshi;
	Jianjie = jianjie;
	beforenoon = shangwu_last;
	afternoon = xiawu_last;
	log_add("The function:doctor::add is finish.");
}
void doctor::view()
{
	log_add("The function:doctor::view is start.");
	cout << "编号：" << ID << endl;
	cout << "姓名：" << Name << endl;
	cout << "年龄：" << Age << endl;
	cout << "职称：" << Zhicheng << endl;
	cout << "科室：" << Keshi << endl;
	cout << "简介：" << Jianjie << endl;
	cout << "上午余号：" << beforenoon << endl;
	cout << "下午余号：" << afternoon << endl;
	//cout << "工作时间：" << time << endl;
	cout << endl;
	log_add("The function:doctor::view is finish.");
}
void price(string zc)
{
	log_add("The function:price(doctor.h) is start.");
	string in = "0";
	string y = "确认";
	if (zc == "主任医师")cout << "请支付50元" << endl;
	else if (zc == "副主任医师")cout << "请支付28元" << endl;
	else if (zc == "主治医师")cout << "请支付10元" << endl;
	while (in != y) {
		cout << "请输入“确认”进行支付。" << endl;
		cin >> in;
		if (in != y)cout << "输入错误，请重新输入。" << endl;
		else cout << "支付成功" << endl;
	}
	log_add("The function:price(doctor.h) is finish.");
}//根据职称得到挂号费并缴费