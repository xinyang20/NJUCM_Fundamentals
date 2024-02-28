#include <iostream>
using namespace std;

// 函数silly：计算数值有多二
// 参数：a-存储数值的字符数组，以'\0'结束，所以不需要另一个参数告诉函数数组有多长
// 返回值：数值犯二的程度
double silly(char a[]);

int main()
{
    char s[102];     // 定义存储数值的数组
    cin >> s;     // 输入不超过位的整数
    double sy = silly(s);     // 计算犯二的程度
    cout << sy << endl;     // 输出犯二的程度
    return 0;
}

double silly(char a[])
{
    // 请在此添加代码，实现函数silly
    /********** Begin *********/
    int i=0,cnt=0,num=0,sum=0;
	double sy;
    if(a[0]=='-')i=1;
    while(a[i]!='\0'){
    	num++;
    	if(a[i]=='2'){
    		cnt++;	
		}
    	sum+=a[i];
		i++;
	}
    sy=cnt*1.0/num;
    if(a[i-1]%2==0)sy*=2.0;
    if(a[0]=='-')sy*=1.5;
    
    return sy;
    
    /********** End **********/
}
