#include <string>
#include <iostream>
using namespace std;

/********* Begin *********/
class User
{
	//在此处声明所需的成员
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
//在此处定义成员函数
User::User(string name,int books){
	Name=name;
	Books=books;
	Usercount++;
	Bookcount+=books;
	cout<<Name<<" "<<Books<<" "<<"进入"<<endl; 
}

User::~User(){
	cout<<Name <<" "<<Books <<" 离开"<<endl;
	Usercount--;
	Bookcount-=Books;
}

void User::GetState(){
	cout<<"书店人数:"<<Usercount<<"，书店共享书数量:"<<Bookcount<<"，人均共享数量:"<<Bookcount/Usercount<<endl;
}
/********* End *********/

