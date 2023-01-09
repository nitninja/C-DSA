#include<bits/stdc++.h>
using namespace std;

int main(){
  
 int num=113,temp,n,sum=0;
 
temp=num;
 while (num>0){

    n=num%10;
    sum=(sum*10)+n;
    num=num/10;

 }
  
  if(temp==sum) cout<<"Number is palindrome";
  else cout<<"Not a palindrome";


  
  return 0;  
}