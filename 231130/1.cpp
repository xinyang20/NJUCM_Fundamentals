#include <iostream>
using namespace std;

class StInfo
{
    /********* Begin *********/
    //�ڴ˴�����StInfo��
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
//�ڴ˴�����StInfo��
void StInfo::SetInfo(int sid,char *name,char *cla,char *phone){
	this->SID=sid;
	this->Name=name;
	this->Class=cla;
	this->Phone=phone;
}

void StInfo::PrintInfo(){
	cout<<"ѧ�ţ�"<<SID<<endl;
	cout<<"������"<<Name<<endl;
	cout<<"�༶��"<<Class<<endl;
	cout<<"�ֻ��ţ�"<<Phone<<endl;
}

/********* End *********/

