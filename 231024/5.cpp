#include <iostream>
using namespace std;

// ����rotateLeft������ѭ������
// ������a-100*100�Ķ�ά���飬�����洢n��n�е����飨n<100)���洢����~n-1�к�~n-1�У�
// m-ѭ�����Ƶ�λ��(0<m<n)
// ����ֵ���ޣ�ѭ�����ƵĽ��д��ԭ��ά������
// ˵�������ݶ�ά����ʱ����ʽ�����У����˵�һά�⣬����ά�Ĵ�С�������
// �������������ÿ������Ԫ�صĵ�ַ
void rotateLeft(int a[][100],int n,int m);

int main()
{
    int a[100][100];     // ����洢��ά����Ŀռ�
    int n, m;
    cin >> n >> m;     // ����n��m

    // ����n*n�ľ��󣬴洢������a��~n-1�к�~n-1��
    int i, j;
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            cin >> a[i][j];

    // ѭ������
    // ˵�������ݶ�ά����ʱ��ʵ�ڲ���ֻ��Ҫ�����������Ϳ�����
    rotateLeft(a,n,m);

    // ���ѭ�����ƵĽ��
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
            cout << " " << a[i][j];
        cout << endl;
    }
    return 0;
}

void rotateLeft(int a[][100],int n,int m)
{
    // ���ڴ���Ӵ��룬ʵ�ֺ���rotateLeft
    /********** Begin *********/
    int temp[n]={0};
    for(int i=1;i<=m;i++){
    	for(int k=0;k<n;k++){
    		temp[k]=a[k][0];
		}
		for(int l=1;l<n;l++){
			for(int h=0;h<n;h++){
				a[h][l-1]=a[h][l];
			}
		}
		for(int k=0;k<n;k++){
    		a[k][n-1]=temp[k];
		}
	}
    
    
    /********** End **********/
}
