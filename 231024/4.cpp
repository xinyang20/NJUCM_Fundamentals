#include <iostream>
using namespace std;

// ����silly��������ֵ�ж��
// ������a-�洢��ֵ���ַ����飬��'\0'���������Բ���Ҫ��һ���������ߺ��������ж೤
// ����ֵ����ֵ�����ĳ̶�
double silly(char a[]);

int main()
{
    char s[102];     // ����洢��ֵ������
    cin >> s;     // ���벻����λ������
    double sy = silly(s);     // ���㷸���ĳ̶�
    cout << sy << endl;     // ��������ĳ̶�
    return 0;
}

double silly(char a[])
{
    // ���ڴ���Ӵ��룬ʵ�ֺ���silly
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
