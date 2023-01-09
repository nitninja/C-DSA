#include<stdio.h>

int main(){
    

    int arr[15],temp;
    for (int i=0;i<15;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<14;i++){

        for(int j=0;j<(14-i);j++){

            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }

        }

    }


    for(int i=0;i<15;i++){
        printf("%d\t",arr[i]);
    }

}