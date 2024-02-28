//******������ΪҽԺ�Һ�ϵͳ***************//
//	ע�����
//	�����в��걸�������ڲ���
//****************************************//

#include <iostream>
#include <fstream>
#include <string>
#include "Sicker.h"
#include "Doctor.h"
#include "Root.h"
#include "log.h"
using namespace std;

//����Ϊ��������
void keshi_search_doc(string);
void type_menu();
//����Ϊȫ�ֱ�������
doctor Doctor[100];
sicker Sicker[3000];
int sicker_num = 1;
int doc_num = 1;
int type_code;
//����Ϊ������������

//����Ϊ�鿴����
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
}//�鿴ҽ������ʱ����Ϣ
void view_sicker()
{
	log_add("The function:view_sicker is start.");
	int i = 1;
	while (i<sicker_num) {
		Sicker[i].view();
		i++;
	}
	log_add("The function:view_sicker is end.");
}//�鿴������Ϣ
void view_doctor()
{
	log_add("The function:view_doctor is start.");
	int i = 1;
	while (i<=doc_num) {
		Doctor[i].view();
		i++;
	}	
	log_add("The function:view_doctor is finish.");
}//�鿴ҽʦ��Ϣ
void view_doctor_guahao_num()
{
	log_add("The function:view_doctor_guahao_num is start.");
	cout << "����\t����Һ���\t����Һ���\t�ܹҺ���" << endl;
	for(int i = 1; i <= doc_num; i++) {
		cout << "��ţ�" << i << " ";
		cout << Doctor[i].get_name() << "\t\t" << 30 - Doctor[i].beforenoon << "\t\t" << 30 - Doctor[i].afternoon << endl;
	}
	log_add("The function:view_doctor_guahao_num is finish.");
}//�鿴ҽʦ�Һ���

void keshi_search_doc(string ks)
{
	log_add("The function:keshi_search_doc is start.");
	for (int i = 1; i <= doc_num; i++) {
		if (Doctor[i].get_keshi() == ks && (Doctor[i].beforenoon > 0 || Doctor[i].afternoon > 0))
			Doctor[i].view();
	}
	log_add("The function:keshi_search_doc is finish.");
}//���ݿ���Ѱ��ҽʦ
void sicker_add(int id, string name, int age, bool sex)
{
	log_add("The function:sicker_add is start.");
	ofstream sicker("sicker.txt",ios::app);
	sicker << id << "\t" << name << "\t\t" << age << "\t" << sex << endl;
	sicker.close();
	log_add("The function:sicker_add is finish.");
}//��txt�ļ�����ӻ�����Ϣ
void dengji()
{
	log_add("The function:dengji is start.");
	int age, sex = 3;
	string name;
	cout << "�������Ϊ��" << sicker_num << endl;
	cout << "�밴����ʾ���뻼����Ϣ��\n";
	cout << "������"; cin >> name;
	cout << "���䣺"; cin >> age;
	while (sex != 1 && sex != 0) {
		cout << "�Ա𣺣�1Ϊ�У�0ΪŮ��"; cin >> sex;
		if (sex != 1 && sex != 0)cout << "�������ݲ��Ϸ������������룺��1Ϊ�У�0ΪŮ��";
	}
	Sicker[sicker_num].add(sicker_num, name, age, sex);
	sicker_add(sicker_num, name, age, sex);
	sicker_num++;
	log_add("The function:dengji is finish.");
}//�Ǽǻ�����Ϣ
void guahao_menu()
{
	log_add("The function:guahao_menu is start.");
	cout << "����Ϊҽ����Ϣ��\n";
	view_doctor();
	cout << "��������Ҫ�Һ�ҽ���ı�ţ�";
	log_add("The function:guahao_menu is start.");
}//�Һ���Ϣ��ʾ
bool guahao_cheat()
{
	log_add("The function:guahao_cheat is start.");
	bool y = 0;
	string name;
	cout << "�����뻼������:";
	cin >> name;
	for (int i = 1; i <= sicker_num; i++) {
		if (Sicker[i].get_name() == name) {
			y = 1;
			break;
		}
	}
	log_add("The function:guahao_cheat is start.");
	return y;
}//���Һ�ʱ�������Ƿ�Ǽ���Ϣ
void guahao(bool m=0)
{
	if (!guahao_cheat()) {
		cout << "�û���δ���еǼǣ����ȵǼǣ�лл��" << endl;
		return;
	}
	log_add("The function:guahao is start.");
	int num=0,time=-1;
	if (m)guahao_menu();
	cin >> num;
	system("cls");
	while (num<1 || num>doc_num) {
		cout << "������ı�Ų��Ϸ������������룺";
		cin >> num;
	}
	if (Doctor[num].beforenoon <= 0 && Doctor[num].afternoon <= 0) {
		cout << "��ѡ���ҽ���ĺ��ѹ��꣬Ϊ���Ƽ�����ͬ����ҽ����\n";
		keshi_search_doc(Doctor[num].get_keshi());
		cout << "��������Ҫ�Һ�ҽ���ı�ţ�";
		guahao(0);
	}
	else if (Doctor[num].beforenoon > 0 && Doctor[num].afternoon > 0) {
		Doctor[num].view();
		cout << "��ѡ��ʱ�䣺\n�������밴1�������밴2��\n" << endl;
		while (time != 1 && time != 2) {
			cin >> time;
			switch (time) {
			case 1: {
				Doctor[num].beforenoon -= 1;
				cout << "���ѹ�����ţ��������Ϊ" << 30 - Doctor[num].beforenoon << endl;
			}break;
			case 2: {
				Doctor[num].afternoon -= 1;
				cout << "���ѹ�����ţ��������Ϊ" << 30 - Doctor[num].afternoon << endl;
			}break;
			default:cout << "���������Ų��Ϸ������������룺\n�������밴1�������밴2��\n";
			}
		}
		price(Doctor[num].get_zhicheng());
	}
	else if (Doctor[num].beforenoon > 0) {
		Doctor[num].view();
		cout << "����ѡ���ҽ���������޺ţ���ѡ�������Ż�ѡ��ͬ��������ҽ����\n����������밴1��ѡ��ͬ��������ҽ���밴2��\n" << endl;
		while (time != 1 && time != 2) {
			cin >> time;
			switch (time) {
			case 1: {
				Doctor[num].beforenoon -= 1;
				cout << "���ѹ�����ţ��������Ϊ" << 30 - Doctor[num].beforenoon << endl;
			}break;
			case 2: {
				keshi_search_doc(Doctor[num].get_keshi());
				cout << "��������Ҫ�Һ�ҽ���ı�ţ�";
				guahao(0);
			}break;
			default:cout << "���������Ų��Ϸ������������룺\n����������밴1��ѡ������ҽ���밴2��\n";
			}
		}
		price(Doctor[num].get_zhicheng());
	}
	else if (Doctor[num].afternoon > 0) {
		Doctor[num].view();
		cout << "����ѡ���ҽ���������޺ţ���ѡ�������Ż�ѡ��ͬ��������ҽ����\n����������밴1��ѡ��ͬ��������ҽ���밴2��\n" << endl;
		cin >> time;
		while (time != 1 && time != 2) {
			switch (time) {
			case 1: {
				Doctor[num].afternoon -= 1;
				cout << "���ѹ�����ţ��������Ϊ" << 30 - Doctor[num].afternoon << endl;
			}break;
			case 2: {
				keshi_search_doc(Doctor[num].get_keshi());
				cout << "��������Ҫ�Һ�ҽ���ı�ţ�";
				guahao(0);
			}break;
			default:cout << "���������Ų��Ϸ������������룺\n����������밴1��ѡ������ҽ���밴2��\n";
			}
		}
		price(Doctor[num].get_keshi());
	}
	log_add("The function:guahao is finish.");
}//�ҺŲ���

void sicker_menu()
{
	log_add("The function:sicker_menu is start.");
	int in;
	cout << "=======����ģʽ=======" << endl;
	cout << "�˵���\n1.������Ϣ�Ǽ�\n2.�Һ�\n3.�鿴ҽ���ϰ�ʱ��\n(��0�˳����򣬰�-1��ѡ���)\n";
	cin >> in;
	switch (in) {
	case -1:system("cls"); type_menu(); break;
	case 0:break;
	case 1:dengji(); system("pause"); system("cls"); sicker_menu(); break;
	case 2:guahao(1); system("pause"); system("cls"); sicker_menu(); break;
	case 3:view_time(); system("pause"); system("cls"); sicker_menu(); break;
	default:cout << "�������ѡ��Ϸ������������룺" << endl; sicker_menu();
	}
	log_add("The function:sicker_menu is finish.");
}//���߲˵�
void doc_menu()
{
	log_add("The function:doc_menu is start.");
	int in;
	cout << "=======ҽʦģʽ=======" << endl;
	cout << "�˵���\n1.�鿴ҽ���ϰ�ʱ��\n(��0�˳����򣬰�-1��ѡ���)\n";
	cin >> in;
	switch (in) {
	case -1:system("cls"); type_menu(); break;
	case 0:break;
	case 1:view_time(); system("pause"); system("cls"); doc_menu(); break;
	default:cout << "�������ѡ��Ϸ������������룺" << endl; doc_menu();
	}
	log_add("The function:doc_menu is finish.");
}//ҽʦ�˵�
void root_menu()
{
	log_add("The function:root_menu is start.");
	int in;
	cout << "=====����Աģʽ=====" << endl;
	cout << "�˵���\n1.�鿴���л�����Ϣ\n2.�鿴����ҽʦ��Ϣ\n3.��ҽʦ�Һ���\n4.�޸Ĺ���Ա����\n(��0�������򣬰�-1��ѡ���)\n";
	cin >> in;
	switch (in) {
	case -1:system("cls"); type_menu(); break;
	case 0:break;
	case 1:view_sicker(); system("pause"); system("cls"); root_menu(); break;
	case 2:view_doctor(); system("pause"); system("cls"); root_menu(); break;
	case 3:view_doctor_guahao_num(); system("pause"); system("cls"); root_menu(); break;
	case 4:change_root_password(); system("pause"); system("cls"); root_menu(); break;
	default:cout << "�������ѡ��Ϸ������������룺" << endl; root_menu();
	}
	log_add("The function:root_menu is finish.");
}//����Ա�˵�

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
}//ҽʦ��ʼ�����ļ���ȡ��Ϣ��
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
}//���߳�ʼ�������ļ���ȡ
void first()
{
	log_add("The function:first is start.");
	doc_first();
	sicker_first();
	root_first();
	log_add("The function:first is finish.");
}//��ʼ����������

void type_menu()
{
	cout << "=======���ѡ��=======" << endl;
	cout << "��ѡ�����������ţ�\n1.����\n2.ҽʦ\n����0��-1�˳�����\n";
	cin >> type_code;
	switch (type_code) {
	case 0:break;
	case 1:system("cls"); sicker_menu(); break;
	case 2:system("cls"); doc_menu(); break;
	case 10: {
		system("cls");
		string password;
		cout << "���������Ա���룺";
		cin >> password;
		while (password != root_password) {
			cout << "����������������룺(����ѡ����������룺-1)";
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
	default:system("cls"); cout << "���������������������롣\n"; type_menu();
	}
}//��ݲɼ�������˵�


int main()
{
	log_add("The exe_application is start.");
	first();
	type_menu();
	log_add("The exe_application is finish.");
	return 0;
}