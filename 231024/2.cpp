#include <iostream>
using namespace std;

// ����maxIncrease���������۶�����
// ������s-���۶����飬n-���۶����鳤�ȣ�n>1
// ����ֵ�����۶��������
int maxIncrease(int s[], int n);

int main()
{
    int n, a[30], i;     // ������������飬n-���۶������a-���۶�����
    cin >> n;      // �������۶�������n>1
    // ����n�����۶�ֱ����a[0]��a[n-1]
    for(i = 0; i < n; i++)
        cin >> a[i];
    i = maxIncrease(a,n);
    cout << "�����������Ϊ��" << i << endl;
    return 0;
}

int maxIncrease(int s[], int n)
{
    //���ڴ���Ӵ��룬ʵ�ֺ���maxIncrease
    /********** Begin *********/
//    int maxadd0=0,maxadd=0;
//	for(int m=0;m<n;m++){
//		if(s[m+1]>s[m]){
//			maxadd0+=s[m+1]-s[m];
//		}
//		else{
//			if(maxadd<maxadd0){
//			maxadd=maxadd0;
//			}
//			maxadd0=0;
//		}
//	}
//    
//    return maxadd;

	int max=s[1]-s[0];
	for(int m=0;m<n;m++){
		for(int x=m+1;x<n;x++){
			if(s[x]-s[m]>max)max=s[x]-s[m];
		}
	}
	return max;
    /********** End **********/
}
