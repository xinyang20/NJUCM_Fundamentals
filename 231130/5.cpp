#include <string>
#include <iostream>
using namespace std;

/********* Begin *********/
class Student
{
	//在此处声明所需的成员
    public:
		int SID;
		string Name;
		float Score;
		Student(){
		};
    	Student(int sid,string name,float score){
    		SID=sid;
    		Name=name;
    		Score=score;
		}
    
}ss[5];
/********* End *********/

int count=0;

void Add(int sid,string name,float sco)
{
    /********* Begin *********/
    ss[count]=Student(sid,name,sco);
    count++;
    
    
    /********* End *********/
}

void PrintAll()
{
    /********* Begin *********/
    //打印出学生表中所有记录
    for(int i=0;i<count;i++){
    	cout<<ss[i].SID <<" "<<ss[i].Name <<" "<<ss[i].Score <<endl;
	}
    
    
    /********* End *********/
}

void Average()
{
    /********* Begin *********/
    //计算并打印出学生表中的平均成绩
    double ave=0;
    for(int i=0;i<count;i++)ave+=ss[i].Score;
    cout<<"平均成绩 "<<ave/count<<endl;
    
    
    /********* End *********/
}
