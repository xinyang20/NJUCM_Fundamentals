#include <iostream>
using namespace std;
struct student
{
	int no;
	char name[20];
	int score[3];
	double s;
}stu[10],temp;
int main()
{
	int s0=0,s1=0,s2=0;
	for(int i=0;i<10;i++){
		cin>>stu[i].no >>stu[i].name >>stu[i].score [0]>>stu[i].score [1]>>stu[i].score [2];
		stu[i].s=(stu[i].score [0]+stu[i].score [1]+stu[i].score [2])/3.0;
		if(stu[i].score [0]<60)s0++;
		if(stu[i].score [1]<60)s1++;
		if(stu[i].score [2]<60)s2++;
	}
	for(int i=0;i<10;i++){
		int k=i;
		for(int m=i+1;m<10;m++){
			if(stu[m].s >stu[k].s )k=m;
		}
		if(k=i){
			temp=stu[k];
			stu[k]=stu[i];
			stu[i]=temp;
		}
	}
	return 0;
}
