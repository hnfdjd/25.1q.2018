
  #include <iostream> 
  #include <string> 
  #include <cmath> 
  using namespace std; 
  int main() { 
   int n,i,b=1; 
   cin >>n; 
   string a; 
   if (n % 2 == 0) { 
    b= pow(10, n / 2 - 1); 
    a = to_string(b); 
    cout << b; 
    for (i =a.length()- 1; i >= 0; i--) { 
     cout << a[i]; 
    } 
    cout << endl; 
    while (b < pow(10, n / 2)-1) { 
     b++; 
     a = to_string(b); 
     cout << b; 
     for (i = a.length() - 1; i >= 0; i--) { 
      cout <<a[i]; 
     } 
     cout << endl; 
    } 
   } 
   else { 
    b= pow(10, (n / 2)); 
    a = to_string(b); 
    cout << b; 
    for (i = a.length()-2; i >= 0; i--) { 
     cout<<a[i]; 
    } 
    cout <<endl; 
    while (b < pow(10, (n / 2)+1)-1) { 
     b++; 
     a = to_string(b); 
     cout <<b; 
     for (i = a.length()-2; i >=0; i--) { 
      cout <<a[i]; 
     } 
     cout <<endl; 
    } 
   } 
   return 0; 
  }