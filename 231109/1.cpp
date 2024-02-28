#include <iostream>
using namespace std;


char * trim(char * str);

int main()
{
    char s[1024];     // 定义存储字符串的一维字符数组
    // 输入一行字符，可以包含空格
    // 输入的字符串存入s中，最多读取个字符，后面自动加上'\0'
    cin.getline(s,1024);
    cout << trim(s) << endl;     // 输出去掉首尾空格后的字符串
    return 0;
}

// 函数trim：去掉字符串首尾空格
// 参数：str-字符指针，指向输入的字符串
// 返回值：字符指针，指向去掉首尾空格后的字符串（首地址）
// 提示：可以直接在字符串str中操作
char * trim(char * str)
{
    // 请在此添加代码，实现函数trim
    /********** Begin *********/
    //str++;
    while(*str==' ')str++;
    char *end=str;
    while(*end!='\0')end++;
    end--;
    while(*end==' ')end--;
    end++;
    *end='\0';
    
    return str; 
    /********** End **********/
}
