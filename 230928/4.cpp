#include <iostream>
using namespace std;
int main()
{
	char x[5];
	cin>>x;
	for(int i=0;i<=4;i++){
		x[i] += 4;
		/*����ע�ʹ������ת�������z��Zʱ������a��A 
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
