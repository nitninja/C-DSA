#include <math.h>
#include <stdio.h>
 
void insertion(int arr[], int n)
{
    int i,temp,j;
    for (i=1;i<n;i++) {
        temp=arr[i];
        j=i-1;
 
        
        while (j>=0 && arr[j]>temp) {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1] =temp;
    }
}


void oddcheck(int ar[],int n){
        int *ptr;
       
        for(int i=0;i<n;i++){
            if(ar[i]%2!=0){
                printf("%d has a position of:%d\t",ar[i],i);
            }
        }


}

int main()
{
    int a[25] ;
    for(int i=0;i<25;i++){
        scanf("%d",&a[i]);
    }
    int n = sizeof(a) / sizeof(a[0]);
 
    insertion(a,n);
    printArray(a,n);
    oddcheck(a,n);
 
    return 0;
}
 void printArray(int arr[], int n)
{
    int i;
    for (i=0;i<n;i++)
        printf("%d ", arr[i]);
    printf("\n");
}

 
