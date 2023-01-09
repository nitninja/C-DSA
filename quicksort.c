#include<stdio.h>
void QuickSort(int num[],int first,int last){
   int i, j, k, temp;

   if(first<last){
      k=first;
      i=first;
      j=last;

      while(i<j){
         while(num[i]<=num[k]&&i<last)
            i++;
         while(num[j]>num[k])
            j--;
         if(i<j){
            temp=num[i];
            num[i]=num[j];
            num[j]=temp;
         }
      }

      temp=num[k];
      num[k]=num[j];
      num[j]=temp;
      QuickSort(num,first,j-1);
      QuickSort(num,j+1,last);

   }
}

int main(){
    
   int i,n;
   scanf("%d",&n);
   int num[n];
   for(i=0;i<n;i++)
      scanf("%d",&num[i]);

   QuickSort(num,0,n-1);

   printf("Sorted array: ");
   for(i=0;i<n;i++)
      printf(" %d",num[i]);

   return 0;
}