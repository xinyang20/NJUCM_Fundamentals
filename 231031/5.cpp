#include <iostream>
using namespace std;
#define N 100

    
    /********** Begin ********/
struct data
{
	int i;
	char c;
}d[N];

int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>d[i].i >>d[i].c;
	}// ‰»Î 
	
	//—°‘Ò≈≈–Ú
	struct data temp;
	for(int i=0;i<n;i++){
		int k=i;
		for(int m=i+1;m<n;m++){
			if(d[m].i>d[k].i )k=m;
		}
		if(k!=i){
			temp=d[k];
			d[k]=d[i];
			d[i]=temp;
		}
	}
	
	cout<<"["<<d[0].i<<","<<d[0].c<<"]";
	for(int i=1;i<n;i++){
		cout<<";"<< "["<<d[i].i<<","<<d[i].c<<"]";
	}
	return 0;
}

	/********** End **********/

