#include <iostream>
using namespace std;

// ����king������ѡ����
// ������a-��������n-1�����ӷֱ�ռ���±�Ϊ~n-1��λ�ã�n-���鳤��
// ����ֵ���º������±����
int king(int a[], int n);

int main()
{
    int n, a[1000], i;     // ������������飬n-����������a-��������
    cin >> n;     // �������������n>0

    // ��ʼ����������,n �����ӷֱ�ռ�� n ��λ��
    a[0] = 0; // 0��λ��û�к���
    for(i = 1;i <= n; i++)
        a[i] = i;

    // ѡ������
    i = king(a, n );
    cout << i << "�ź����Ǵ�����" << endl;
    return 0;
}

int king(int a[], int n)
{
    // ���ڴ���Ӵ��룬ʵ�ֺ���king
    /********** Begin *********/
    int num=0,i=1,cnt;
    while(num!=1){
    	cnt=0;
    	i=1;
    	for(;i<=n;i++){
    		for(int m=1;m<=n;m++){
    			if(a[m]!=0)cnt++;
			}
			if(cnt==1)goto out;
			while(a[i]==0){
				i++;
				if(i==n+1)i=1;
			}
			num++;
			if(num%3==0){
				a[i]=0;
			}
		}
	}out:
	for(i=1;i<=n;i++)if(a[i]!=0)break;
	
    return i;
    
    /********** End **********/
}
