#include <iostream>
using namespace std;

void toUp(char * str);

int main()
{
    char s[1024];
    cin.getline(s,1024);     // 输入一行字符
    toUp(s);     // 调用toUp函数，转换成大写字母
    cout<<s<<endl;     // 输出变更后的新字符串
    return 0;
}

// 函数toUp：将str指向的字符串中的小写字母变成对应的大写字母
// 参数：str-指向字符串
void toUp(char * str)
{
    // 请在此添加代码，实现函数toUp
    /********** Begin *********/
    char *point=str;
    while(*point!='\0'){
    	if(*point>='a'&&*point<='z')*point=*point+('A'-'a');
    	point++;
	}
    
    
    /********** End **********/
}
