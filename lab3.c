#include<stdio.h>

int main(){


char ch[6];
int num1=0;
int num2=0;

 
   printf("\nEnter The String : ");
   scanf("%s", &ch);
 
    for(int i=0;i<6;i++){

  if(ch[i] >= 97 && ch[i] <= 122){
        num2++;
      }
      else{
          num1++;
      }
   }
   
   if(num1!=0){
      printf("String is Not Lowercase Letters\n");+
      printf("Invalid case!!");
   }
   else if(num1==0){
  printf("String is in lower case");
   }
   
   return (0);


}