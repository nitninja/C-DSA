#include<stdio.h>  
void mergeSort(int[],int,int);  
void merge(int[],int,int,int);  
void main ()  
{   int n;
    
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int i;  
    mergeSort(a,0,n);  
    printf("sorted elements:");  
    for(i=0;i<n;i++)  
    {  
        printf("%d\t",a[i]);  
    }  

    printf("\npositions:");
    for(int i=0;i<n;i++){
        if(a[i]%2!=0){
            printf("%d\t",i);
        }
    }
      
}  
void mergeSort(int a[], int ini, int end)  
{  
    int mid;  
    if(ini<end)  
    {  
        mid = (ini+end)/2;  
        mergeSort(a,ini,mid);  
        mergeSort(a,mid+1,end);  
        merge(a,ini,mid,end);  
    }  
}  
void merge(int a[], int ini, int mid, int end)  
{  
    int i=ini,j=mid+1,k,index = ini;  
    int temp[10];  
    while(i<=mid && j<=end)  
    {  
        if(a[i]>a[j])  
        {  
            temp[index] = a[i];  
            i++;  
        }  
        else   
        {  
            temp[index] = a[j];  
            j++;   
        }  
        index++;  
    }  
    if(i>mid)  
    {  
        while(j<=end)  
        {  
            temp[index] = a[j];  
            index++;  
            j++;  
        }  
    }  
    else   
    {  
        while(i<=mid)  
        {  
            temp[index] = a[i];  
            index++;  
            i++;  
        }  
    }  
    k = ini;  
    while(k<index)  
    {  
        a[k]=temp[k];  
        k++;  
    }  
} 