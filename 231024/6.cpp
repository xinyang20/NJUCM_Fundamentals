#include <bits/stdc++.h>
using namespace std;
int main()
{
	int titlecount[1001]={0};
	int n;
	cin>>n;
	
	for(int i=1;i<=n;i++){
		int k;
		cin>>k;
		for(int m=1;m<=k;m++){
			int title;
			cin>>title;
			titlecount[title]++;
		}
	}
	
	int mosttitle=0,maxnum=0;
	for(int i=1000;i>=1;i--){
		if(titlecount[i]>maxnum){
			maxnum=titlecount[i];
			mosttitle=i;
		}
	}
	
	cout<<mosttitle<<" "<<maxnum<<endl;
	
	return 0;
}
