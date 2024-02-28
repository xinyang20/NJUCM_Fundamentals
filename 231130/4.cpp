#include<iostream>
#include<string>
using namespace std;

class Student
{
/********* Begin *********/

//在此处声明所需的成员
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

//在此处定义成员函数
Student::Student(){
	SID=0;
	Name="王小明";
}

Student::Student(int sid,string name){
	SID=sid;
	Name=name;
}

Student::~Student(){
	cout<<SID<<" "<<Name<<" 退出程序"<<endl;
}
/********* End *********/

