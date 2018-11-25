
#include <iostream>
using namespace std;
int main() 
{  
 int i, j,s,n; 
 cin>>n;
 if(n==1){cout<<1;}
else{
 
 for (i = 2; i <=n; i++) { 
 for (j = 2; j <= (i / j); j++) 
 if (!(i % j)) 
 break;  
 if (j > (i / j)) {
 s=s*i;
}
 }  cout<<s;
 }
 return 0; 
}