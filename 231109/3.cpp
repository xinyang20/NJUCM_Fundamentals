#include <iostream>
using namespace std;

void extractNum(char * str);

int main()
{
    char s[1024];
    cin.getline(s,1024);     // ����һ���ַ�
    extractNum(s);     // ����extractNum������ѡ������
    cout<<s<<endl;     // ���ѡ��������
    return 0;
}

// ����extractNum��ѡ��strָ����ַ����е����֣���д��str
// ������str-ָ���ַ���
void extractNum(char * str)
{
    // ���ڴ���Ӵ��룬ʵ�ֺ���extractNum
    /********** Begin *********/
    char * pointer=str;
    char * point=str;
    bool num=1;
    while(*point!='\0'){
    	if((num&&*point=='-')||(*point>='0'&&*point<='9')){
    		num=0;
    		*pointer=*point;
    		pointer++;
		}
		point++;
	}*pointer='\0';
    
    
    /********** End **********/
}
