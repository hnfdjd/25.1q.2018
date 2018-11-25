#include <iostream>
using namespace std;
int main()
{
int i,n;
cin >> n;
int a= n;
for (i=2; i*i<=n; i++)
if (n % i == 0) {
while (n % i == 0)
n =n/i;
a-=a/ i;
}
if (n > 1)
a =a-(a / n);
cout<<a<<endl;
return 0;
		}