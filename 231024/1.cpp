#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int n, a[30], i;     // ������������飬n-���۶������a-���۶�
    cin >> n;     // �������۶�������n <= 30
    // ����n�����۶�ֱ����a[0]��a[n-1]
    for(i = 0; i < n; i++)
        cin >> a[i];
    // ���ڴ���Ӵ��룬���㲢������۶�Ĳ������
    /********** Begin *********/
	for(int i=0;i<n-2;i++){
		cout<<a[i+1]-a[i]<<" ";
	}
    cout<<a[n-1]-a[n-2];
    
    /********** End **********/
    return 0;
}
