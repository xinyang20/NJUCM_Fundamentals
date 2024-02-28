#include <iostream>
using namespace std;
#define N 10
struct lifting{
	char name[N];
	double weight;
	int score[2];
	int s;
}n[N]={{"×ÓĞù",75.00,174,207},
	   {"×Óº­",75.18,170,205},
	   {"ÓîĞù",70.01,173,207},
	   {"ºÆÈ»",72.54,168,209},
	   {"ºÆÓî",73.99,170,200},
	   {"ğ©Ğù",70.02,173,207},
	   {"ÓêÔó",73.77,176,199},
	   {"²©ÎÄ",72.89,178,202},
	   {"¿¡½Ü",74.56,180,210},
	   {"×Óî£",75.50,177,208}};
int main()
{
	for(int i=0;i<N;i++){
		n[i].s=n[i].score[0]+n[i].score[1];
	}
	struct lifting temp;
	for(int i=0;i<9;i++){
		for(int m=0;m<9-i;m++){
			if(n[m].s<n[m+1].s){
				temp=n[m];
				n[m]=n[m+1];
				n[m+1]=temp;
			}else if(n[m].s==n[m+1].s&&n[m].weight >n[m+1].weight ){
				temp=n[m];
				n[m]=n[m+1];
				n[m+1]=temp;
			}
		}
	}
	for(int i=0;i<10;i++){
		cout<<i+1<<" "<<n[i].name<<" "<<n[i].s<<endl;
	}
	return 0;
}
