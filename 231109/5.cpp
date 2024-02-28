// 包含字符串函数库
#include <string.h>
#include <iostream>
using namespace std;

int frequency(char * substr, char * str);

int main()
{
    char sub[128],str[1024];
    cin.getline(sub,128);     // 输入子串
    cin.getline(str,1024);     // 输入长串
    int n = frequency(sub,str);     // 调用frequency函数，计算子串在长串中出现的次数
    cout<<n<<endl;     // 输出次数
    return 0;
}

// 函数frequency：计算子串在长串中出现的次数
// 参数：substr-指向子串，str-指向长串
// 返回值：出现的次数
int frequency(char * substr, char * str)
{
    // 请在此添加代码，实现函数frequency
    /********** Begin *********/
    int count=0;
    int len1=strlen(str);
    int len2=strlen(substr);
    while(len1>=len2){
		str=strstr(str,substr);
		if(str!=0){
			count++;
			str+=len2;
		}else break;
		len1=strlen(str);
	}
    return count;
    
    /********** End **********/
}
