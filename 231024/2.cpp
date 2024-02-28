#include <iostream>
using namespace std;

// 函数maxIncrease：计算销售额增幅
// 参数：s-销售额数组，n-销售额数组长度，n>1
// 返回值：销售额最大增幅
int maxIncrease(int s[], int n);

int main()
{
    int n, a[30], i;     // 定义变量及数组，n-销售额个数，a-销售额数组
    cin >> n;      // 输入销售额数量，n>1
    // 输入n个销售额，分别存入a[0]到a[n-1]
    for(i = 0; i < n; i++)
        cin >> a[i];
    i = maxIncrease(a,n);
    cout << "最大销售增幅为：" << i << endl;
    return 0;
}

int maxIncrease(int s[], int n)
{
    //请在此添加代码，实现函数maxIncrease
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
