#include <iostream>
using namespace std;

void pswap(int * p, int *q);

int main()
{
    int a, b;
    cin >> a >> b;     // ������������
    pswap(&a,&b);     // ����pswap����������a��b��ֵ
    cout << a << " " << b << endl;     // ���a��b��ֵ
    return 0;
}

//����pswap������ָ��p��qָ��ĵ�Ԫ�е�����ֵ
//������p,q-int����ָ�룬ָ��Ҫ����������
void pswap(int * p, int *q)
{
    // ���ڴ���Ӵ��룬ʵ�ֺ���pswap
    /********** Begin *********/
    int temp=*p;
    *p=*q;
    *q=temp;
    
    
    /********** End **********/
}
