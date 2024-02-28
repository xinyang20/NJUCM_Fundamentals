#include <iostream>
using namespace std;
int main()
{
	int wufen,liangfen,yifen;
	for(wufen=0;wufen<=20;wufen++){
		for(liangfen=0;liangfen<=(100-wufen*5)/2;liangfen++){
			yifen=100-wufen*5-liangfen*2;
			if(yifen>=0)cout<<wufen<<"个5分，"<<liangfen<<"个2分，"<<yifen<<"个1分。"<<endl; 
		}
	}
	
	return 0;
}
