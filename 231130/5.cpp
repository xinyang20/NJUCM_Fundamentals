#include <string>
#include <iostream>
using namespace std;

/********* Begin *********/
class Student
{
	//�ڴ˴���������ĳ�Ա
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
    //��ӡ��ѧ���������м�¼
    for(int i=0;i<count;i++){
    	cout<<ss[i].SID <<" "<<ss[i].Name <<" "<<ss[i].Score <<endl;
	}
    
    
    /********* End *********/
}

void Average()
{
    /********* Begin *********/
    //���㲢��ӡ��ѧ�����е�ƽ���ɼ�
    double ave=0;
    for(int i=0;i<count;i++)ave+=ss[i].Score;
    cout<<"ƽ���ɼ� "<<ave/count<<endl;
    
    
    /********* End *********/
}
