#include <iostream> 
#include <vector> 
using namespace std; 
 
int main() 
{ 
 int i,j,n; 
 cin>>n; 
 vector <int> c(n*2); 
 c.assign(n*2,1); 
 c[0]=0; 
 c[1]=0; 
 for(i=2;i<n*2;i++){ 
 if(c[i]==1){ 
 for(j=i*2;j<n*2;j+=i){ 
 c[j]=0; 
 }  }  } 
 for( i=2;i<n*2;i++){ 
 if((c[i]==1) && (c[i*2+1]==1)){ 
 cout<<i<<" "; 
 } } 
 return 0; 
}