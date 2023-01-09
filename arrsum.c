#include <stdio.h>
int main(){
    int i;
    int n,count;
   scanf("%d",&n);

   float arr[n];
   for(i=0;i<n;i++){
       scanf("%f",&arr[i]);
   }
   float biggest;
   biggest=arr[0];
   for(i=1;i<n;i++){
       if(biggest<arr[i]){
           biggest=arr[i];
       }
       
   }
   printf("%f",biggest);

}