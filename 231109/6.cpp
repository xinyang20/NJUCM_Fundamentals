#include <iostream>
using namespace std;

void strmncpy(char *s, int m, int n, char *t);

int main()
{
    char s[128],t[128];
    int m,n;
    cin>>s;     // ����Դ��
    cin>>m>>n;     // ����m��n
    strmncpy(s, m, n, t);     // �ַ�������
    cout << t <<endl;     // ������ƽ��
    return 0;
}

// ����strmncpy���ַ����Ĳ��ָ��ƣ���sָ���ַ����ӵ�m���ַ���ʼ��n���ַ����Ƶ�t��
// ������s-ָ��Դ�ַ�����t-ָ��Ŀ���ַ�����m-��ʼλ�ã�n-�ַ�����
// ����ֵ����
void strmncpy(char *s, int m, int n, char *t)
{
    // ���ڴ���Ӵ��룬ʵ�ֺ���strmncpy
    /********** Begin *********/
    int i=0;
    while(i<n&&*(s+m+i)!='\0'){
    	*t=*(s+m+i);
    	i++;t++;
	}if(i!=n-1){
		*t=' ';
		i++;t++;
	}
	*t='\0';
    
    
    /********** End **********/
}
