// �����ַ���������
#include <string.h>
#include <iostream>
using namespace std;

int frequency(char * substr, char * str);

int main()
{
    char sub[128],str[1024];
    cin.getline(sub,128);     // �����Ӵ�
    cin.getline(str,1024);     // ���볤��
    int n = frequency(sub,str);     // ����frequency�����������Ӵ��ڳ����г��ֵĴ���
    cout<<n<<endl;     // �������
    return 0;
}

// ����frequency�������Ӵ��ڳ����г��ֵĴ���
// ������substr-ָ���Ӵ���str-ָ�򳤴�
// ����ֵ�����ֵĴ���
int frequency(char * substr, char * str)
{
    // ���ڴ���Ӵ��룬ʵ�ֺ���frequency
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
