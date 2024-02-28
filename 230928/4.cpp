#include <iostream>
using namespace std;
int main()
{
	char x[5];
	cin>>x;
	for(int i=0;i<=4;i++){
		x[i] += 4;
		/*以下注释代码可在转换后大于z或Z时，返回a或A 
		if(x[i]>'v'||x[i]>'V'){
			x[i] -= 26;
		}
		*/
		cout<<x[i];
	}
	cout<<endl;
	
	system("pause");
	return 0;
}
