#include <iostream>
using namespace std;
int main()
{
	int start,end;
	cin>>start>>end;
	
	int h = end/100 - start/100;
	int m = end%100 - start%100;
	
	while(m<0){
		h--;
		m += 60;
	}
	
	cout<<h<<":"<<m<<endl;
	
	system("pause");
	return 0;
}
