//******本程序为医院挂号系统***************//
//	注意事项：
//	程序尚不完备，仅用于测试
//****************************************//

#include <iostream>
#include <fstream>
#include <string>
#include "Sicker.h"
#include "Doctor.h"
#include "Root.h"
#include "log.h"
using namespace std;

//以下为函数声明
void keshi_search_doc(string);
void type_menu();
//以下为全局变量定义
doctor Doctor[100];
sicker Sicker[3000];
int sicker_num = 1;
int doc_num = 1;
int type_code;
//以下为基本函数定义

//以下为查看函数
void view_time()
{
	log_add("The function:view_time is start.");
	ifstream time("doc_time.txt");
	string name, tt;

	while (time) {
		time >> name >> tt;
		if (time)
			cout << name << " " << tt << endl;
	}
	time.close();
	log_add("The function:view_time is finish.");
}//查看医生门诊时间信息
void view_sicker()
{
	log_add("The function:view_sicker is start.");
	int i = 1;
	while (i<sicker_num) {
		Sicker[i].view();
		i++;
	}
	log_add("The function:view_sicker is end.");
}//查看患者信息
void view_doctor()
{
	log_add("The function:view_doctor is start.");
	int i = 1;
	while (i<=doc_num) {
		Doctor[i].view();
		i++;
	}	
	log_add("The function:view_doctor is finish.");
}//查看医师信息
void view_doctor_guahao_num()
{
	log_add("The function:view_doctor_guahao_num is start.");
	cout << "姓名\t上午挂号量\t下午挂号量\t总挂号量" << endl;
	for(int i = 1; i <= doc_num; i++) {
		cout << "编号：" << i << " ";
		cout << Doctor[i].get_name() << "\t\t" << 30 - Doctor[i].beforenoon << "\t\t" << 30 - Doctor[i].afternoon << endl;
	}
	log_add("The function:view_doctor_guahao_num is finish.");
}//查看医师挂号量

void keshi_search_doc(string ks)
{
	log_add("The function:keshi_search_doc is start.");
	for (int i = 1; i <= doc_num; i++) {
		if (Doctor[i].get_keshi() == ks && (Doctor[i].beforenoon > 0 || Doctor[i].afternoon > 0))
			Doctor[i].view();
	}
	log_add("The function:keshi_search_doc is finish.");
}//根据科室寻找医师
void sicker_add(int id, string name, int age, bool sex)
{
	log_add("The function:sicker_add is start.");
	ofstream sicker("sicker.txt",ios::app);
	sicker << id << "\t" << name << "\t\t" << age << "\t" << sex << endl;
	sicker.close();
	log_add("The function:sicker_add is finish.");
}//向txt文件中添加患者信息
void dengji()
{
	log_add("The function:dengji is start.");
	int age, sex = 3;
	string name;
	cout << "患者序号为：" << sicker_num << endl;
	cout << "请按照提示输入患者信息：\n";
	cout << "姓名："; cin >> name;
	cout << "年龄："; cin >> age;
	while (sex != 1 && sex != 0) {
		cout << "性别：（1为男，0为女）"; cin >> sex;
		if (sex != 1 && sex != 0)cout << "输入内容不合法，请重新输入：（1为男，0为女）";
	}
	Sicker[sicker_num].add(sicker_num, name, age, sex);
	sicker_add(sicker_num, name, age, sex);
	sicker_num++;
	log_add("The function:dengji is finish.");
}//登记患者信息
void guahao_menu()
{
	log_add("The function:guahao_menu is start.");
	cout << "以下为医生信息：\n";
	view_doctor();
	cout << "请输入想要挂号医生的编号：";
	log_add("The function:guahao_menu is start.");
}//挂号信息显示
bool guahao_cheat()
{
	log_add("The function:guahao_cheat is start.");
	bool y = 0;
	string name;
	cout << "请输入患者姓名:";
	cin >> name;
	for (int i = 1; i <= sicker_num; i++) {
		if (Sicker[i].get_name() == name) {
			y = 1;
			break;
		}
	}
	log_add("The function:guahao_cheat is start.");
	return y;
}//检查挂号时，患者是否登记信息
void guahao(bool m=0)
{
	if (!guahao_cheat()) {
		cout << "该患者未进行登记，请先登记，谢谢。" << endl;
		return;
	}
	log_add("The function:guahao is start.");
	int num=0,time=-1;
	if (m)guahao_menu();
	cin >> num;
	system("cls");
	while (num<1 || num>doc_num) {
		cout << "您输入的编号不合法，请重新输入：";
		cin >> num;
	}
	if (Doctor[num].beforenoon <= 0 && Doctor[num].afternoon <= 0) {
		cout << "您选择的医生的号已挂完，为您推荐以下同科室医生：\n";
		keshi_search_doc(Doctor[num].get_keshi());
		cout << "请输入想要挂号医生的编号：";
		guahao(0);
	}
	else if (Doctor[num].beforenoon > 0 && Doctor[num].afternoon > 0) {
		Doctor[num].view();
		cout << "请选择时间：\n（上午请按1，下午请按2）\n" << endl;
		while (time != 1 && time != 2) {
			cin >> time;
			switch (time) {
			case 1: {
				Doctor[num].beforenoon -= 1;
				cout << "您已挂上午号，您的序号为" << 30 - Doctor[num].beforenoon << endl;
			}break;
			case 2: {
				Doctor[num].afternoon -= 1;
				cout << "您已挂下午号，您的序号为" << 30 - Doctor[num].afternoon << endl;
			}break;
			default:cout << "您输入的序号不合法，请重新输入：\n（上午请按1，下午请按2）\n";
			}
		}
		price(Doctor[num].get_zhicheng());
	}
	else if (Doctor[num].beforenoon > 0) {
		Doctor[num].view();
		cout << "您所选择的医生下午已无号，请选择挂上午号或选择同科室其他医生：\n（挂上午号请按1，选择同科室其他医生请按2）\n" << endl;
		while (time != 1 && time != 2) {
			cin >> time;
			switch (time) {
			case 1: {
				Doctor[num].beforenoon -= 1;
				cout << "您已挂上午号，您的序号为" << 30 - Doctor[num].beforenoon << endl;
			}break;
			case 2: {
				keshi_search_doc(Doctor[num].get_keshi());
				cout << "请输入想要挂号医生的编号：";
				guahao(0);
			}break;
			default:cout << "您输入的序号不合法，请重新输入：\n（挂上午号请按1，选择其他医生请按2）\n";
			}
		}
		price(Doctor[num].get_zhicheng());
	}
	else if (Doctor[num].afternoon > 0) {
		Doctor[num].view();
		cout << "您所选择的医生上午已无号，请选择挂下午号或选择同科室其他医生：\n（挂下午号请按1，选择同科室其他医生请按2）\n" << endl;
		cin >> time;
		while (time != 1 && time != 2) {
			switch (time) {
			case 1: {
				Doctor[num].afternoon -= 1;
				cout << "您已挂下午号，您的序号为" << 30 - Doctor[num].afternoon << endl;
			}break;
			case 2: {
				keshi_search_doc(Doctor[num].get_keshi());
				cout << "请输入想要挂号医生的编号：";
				guahao(0);
			}break;
			default:cout << "您输入的序号不合法，请重新输入：\n（挂上午号请按1，选择其他医生请按2）\n";
			}
		}
		price(Doctor[num].get_keshi());
	}
	log_add("The function:guahao is finish.");
}//挂号操作

void sicker_menu()
{
	log_add("The function:sicker_menu is start.");
	int in;
	cout << "=======患者模式=======" << endl;
	cout << "菜单：\n1.患者信息登记\n2.挂号\n3.查看医生上班时间\n(按0退出程序，按-1重选身份)\n";
	cin >> in;
	switch (in) {
	case -1:system("cls"); type_menu(); break;
	case 0:break;
	case 1:dengji(); system("pause"); system("cls"); sicker_menu(); break;
	case 2:guahao(1); system("pause"); system("cls"); sicker_menu(); break;
	case 3:view_time(); system("pause"); system("cls"); sicker_menu(); break;
	default:cout << "您输入的选项不合法，请重新输入：" << endl; sicker_menu();
	}
	log_add("The function:sicker_menu is finish.");
}//患者菜单
void doc_menu()
{
	log_add("The function:doc_menu is start.");
	int in;
	cout << "=======医师模式=======" << endl;
	cout << "菜单：\n1.查看医生上班时间\n(按0退出程序，按-1重选身份)\n";
	cin >> in;
	switch (in) {
	case -1:system("cls"); type_menu(); break;
	case 0:break;
	case 1:view_time(); system("pause"); system("cls"); doc_menu(); break;
	default:cout << "您输入的选项不合法，请重新输入：" << endl; doc_menu();
	}
	log_add("The function:doc_menu is finish.");
}//医师菜单
void root_menu()
{
	log_add("The function:root_menu is start.");
	int in;
	cout << "=====管理员模式=====" << endl;
	cout << "菜单：\n1.查看所有患者信息\n2.查看所有医师信息\n3.各医师挂号量\n4.修改管理员密码\n(按0结束程序，按-1重选身份)\n";
	cin >> in;
	switch (in) {
	case -1:system("cls"); type_menu(); break;
	case 0:break;
	case 1:view_sicker(); system("pause"); system("cls"); root_menu(); break;
	case 2:view_doctor(); system("pause"); system("cls"); root_menu(); break;
	case 3:view_doctor_guahao_num(); system("pause"); system("cls"); root_menu(); break;
	case 4:change_root_password(); system("pause"); system("cls"); root_menu(); break;
	default:cout << "您输入的选项不合法，请重新输入：" << endl; root_menu();
	}
	log_add("The function:root_menu is finish.");
}//管理员菜单

void doc_first()
{
	log_add("The function:doc_first is strat.");
	ifstream doc("doctor.txt");
	int age;
	string name, zhicheng, keshi, jianjie;
	while (doc) {
		doc >> name >> age >> zhicheng >> keshi >> jianjie;
		if (doc) {
			Doctor[doc_num].add(doc_num, name, age, zhicheng, keshi, jianjie);
			doc_num++;
			log_add("The function:doc_first has added a doctor.");
		}
	}
	doc_num--;
	doc.close();
	log_add("The function:doc_first is finish.");
}//医师初始化：文件读取信息等
void sicker_first()
{
	log_add("The function:sicker_first is start.");
	ifstream sick("sicker.txt");
	int id, age, sex;
	string name;
	while (sick) {
		sick >> id >> name >> age >> sex;
		if (sick) {
			Sicker[sicker_num].add(id, name, age, sex);
			sicker_num++;
			log_add("b::The function:sicker_first has added a sicker.");
		}
	}
	sick.close();
	log_add("The function:sicker_first is finish.");
}//患者初始化，从文件读取
void first()
{
	log_add("The function:first is start.");
	doc_first();
	sicker_first();
	root_first();
	log_add("The function:first is finish.");
}//初始化函数集合

void type_menu()
{
	cout << "=======身份选择=======" << endl;
	cout << "请选择您的身份序号：\n1.患者\n2.医师\n（按0或-1退出程序）\n";
	cin >> type_code;
	switch (type_code) {
	case 0:break;
	case 1:system("cls"); sicker_menu(); break;
	case 2:system("cls"); doc_menu(); break;
	case 10: {
		system("cls");
		string password;
		cout << "请输入管理员密码：";
		cin >> password;
		while (password != root_password) {
			cout << "密码错误，请重新输入：(重新选择身份请输入：-1)";
			cin >> password;
			if (password == "-1") {
				system("cls"); 
				type_menu();
			}
		}
		system("cls");
		root_menu();
		return;
	}
	default:system("cls"); cout << "输入的序号有误，请重新输入。\n"; type_menu();
	}
}//身份采集，进入菜单


int main()
{
	log_add("The exe_application is start.");
	first();
	type_menu();
	log_add("The exe_application is finish.");
	return 0;
}