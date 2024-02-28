#pragma once
#include <iostream>
#include <string>
#include "log.h"
using namespace std;
class doctor
{
private:
	int ID;//���
	string Name;//����
	int Age;//����
	string Zhicheng;//ְ��
	string Keshi;//����
	string Jianjie;//���
public:
	int beforenoon;//����ʣ�����
	int afternoon;//����ʣ�����
	doctor();//�޲ι���
	void add(int id, string name, int age, string zhicheng, string keshi, string jianjie, int shangwu_last, int xiawu_last);//ҽ������
	void view();//�鿴����
	string get_name() { return Name; };//���ֻ�ȡ
	string get_keshi() { return Keshi; };//���һ�ȡ
	string get_zhicheng() { return Zhicheng; };//ְ�ƻ�ȡ
};
doctor::doctor()
{
	ID = -1;
	Name = "��";
	Age = -1;
	Zhicheng = "��";
	Keshi = "��";
	Jianjie = "��";
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
	cout << "��ţ�" << ID << endl;
	cout << "������" << Name << endl;
	cout << "���䣺" << Age << endl;
	cout << "ְ�ƣ�" << Zhicheng << endl;
	cout << "���ң�" << Keshi << endl;
	cout << "��飺" << Jianjie << endl;
	cout << "������ţ�" << beforenoon << endl;
	cout << "������ţ�" << afternoon << endl;
	//cout << "����ʱ�䣺" << time << endl;
	cout << endl;
	log_add("The function:doctor::view is finish.");
}
void price(string zc)
{
	log_add("The function:price(doctor.h) is start.");
	string in = "0";
	string y = "ȷ��";
	if (zc == "����ҽʦ")cout << "��֧��50Ԫ" << endl;
	else if (zc == "������ҽʦ")cout << "��֧��28Ԫ" << endl;
	else if (zc == "����ҽʦ")cout << "��֧��10Ԫ" << endl;
	while (in != y) {
		cout << "�����롰ȷ�ϡ�����֧����" << endl;
		cin >> in;
		if (in != y)cout << "����������������롣" << endl;
		else cout << "֧���ɹ�" << endl;
	}
	log_add("The function:price(doctor.h) is finish.");
}//����ְ�Ƶõ��ҺŷѲ��ɷ�