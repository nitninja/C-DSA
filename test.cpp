#include<bits/stdc++.h>
using namespace std;

unsigned int fact(unsigned int t){

if(t==0){
  return 1;
}
return t*fact(t-1);
}

int main(){

int n;
cin>>n;
 cout << "Factorial of "
         << n << " is " << fact(n) << endl;
         return 0;


// cout<<total<<endl;


return 0;
 
    
}