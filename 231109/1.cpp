#include <iostream>
using namespace std;


char * trim(char * str);

int main()
{
    char s[1024];     // ����洢�ַ�����һά�ַ�����
    // ����һ���ַ������԰����ո�
    // ������ַ�������s�У�����ȡ���ַ��������Զ�����'\0'
    cin.getline(s,1024);
    cout << trim(s) << endl;     // ���ȥ����β�ո����ַ���
    return 0;
}

// ����trim��ȥ���ַ�����β�ո�
// ������str-�ַ�ָ�룬ָ��������ַ���
// ����ֵ���ַ�ָ�룬ָ��ȥ����β�ո����ַ������׵�ַ��
// ��ʾ������ֱ�����ַ���str�в���
char * trim(char * str)
{
    // ���ڴ���Ӵ��룬ʵ�ֺ���trim
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
