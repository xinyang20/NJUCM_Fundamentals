#include <iostream>
using namespace std;

class StInfo
{
    /********* Begin *********/
    //在此处声明StInfo类
    public:
	    int SID;
		char *Name;
		char *Class;
		char *Phone;
		void SetInfo(int sid,char *name,char *cla,char *phone);
		void PrintInfo();
    
    
    /********* End *********/
};

/********* Begin *********/
//在此处定义StInfo类
void StInfo::SetInfo(int sid,char *name,char *cla,char *phone){
	this->SID=sid;
	this->Name=name;
	this->Class=cla;
	this->Phone=phone;
}

void StInfo::PrintInfo(){
	cout<<"学号："<<SID<<endl;
	cout<<"姓名："<<Name<<endl;
	cout<<"班级："<<Class<<endl;
	cout<<"手机号："<<Phone<<endl;
}

/********* End *********/

