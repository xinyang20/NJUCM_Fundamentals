#include <string>
#include <iostream>
using namespace std;

/********* Begin *********/
class User
{
	//�ڴ˴���������ĳ�Ա
    private:
		string Name;
	    int Books;
	public:
		static int Usercount;
		static int Bookcount;
		User(string name,int books);
		~User();
    	static void GetState();
    
};
int User::Usercount=0;
int User::Bookcount=0;
//�ڴ˴������Ա����
User::User(string name,int books){
	Name=name;
	Books=books;
	Usercount++;
	Bookcount+=books;
	cout<<Name<<" "<<Books<<" "<<"����"<<endl; 
}

User::~User(){
	cout<<Name <<" "<<Books <<" �뿪"<<endl;
	Usercount--;
	Bookcount-=Books;
}

void User::GetState(){
	cout<<"�������:"<<Usercount<<"����깲��������:"<<Bookcount<<"���˾���������:"<<Bookcount/Usercount<<endl;
}
/********* End *********/

