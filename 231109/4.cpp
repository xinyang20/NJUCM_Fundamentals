#include <iostream>
using namespace std;

void toUp(char * str);

int main()
{
    char s[1024];
    cin.getline(s,1024);     // ����һ���ַ�
    toUp(s);     // ����toUp������ת���ɴ�д��ĸ
    cout<<s<<endl;     // ������������ַ���
    return 0;
}

// ����toUp����strָ����ַ����е�Сд��ĸ��ɶ�Ӧ�Ĵ�д��ĸ
// ������str-ָ���ַ���
void toUp(char * str)
{
    // ���ڴ���Ӵ��룬ʵ�ֺ���toUp
    /********** Begin *********/
    char *point=str;
    while(*point!='\0'){
    	if(*point>='a'&&*point<='z')*point=*point+('A'-'a');
    	point++;
	}
    
    
    /********** End **********/
}
