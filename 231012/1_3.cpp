#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	int n=rand();
	if(n%26<24)cout<<char(n%26+'a')<<char(n%26+'a'+1)<<char(n%26+'a'+2)<<endl;
	else if(n%26==24)cout<<char(n%26+'a')<<char(n%26+'a'+1)<<char(n%26+'a'-24)<<endl;
	else if(n%26==25)cout<<char(n%26+'a')<<char(n%26+'a'-25)<<char(n%26+'a'-24)<<endl;
	return 0;
}
