#include<iostream>
#include<string>
using namespace std;

class Student
{
/********* Begin *********/

//�ڴ˴���������ĳ�Ա
private:
	int SID;
	string Name;
public:
	Student();
	Student(int sid,string name);
	~Student();
/********* End *********/
};

/********* Begin *********/

//�ڴ˴������Ա����
Student::Student(){
	SID=0;
	Name="��С��";
}

Student::Student(int sid,string name){
	SID=sid;
	Name=name;
}

Student::~Student(){
	cout<<SID<<" "<<Name<<" �˳�����"<<endl;
}
/********* End *********/

