#include<stdio.h>

void count_sort(int a[],int max){
    




   







}

int main(){

   

    int a[] = {3,4,7,6,2,9,6,4,3,6};
    int max=a[0];
    
    int val,count=0;
 

    for(int i=0;i<10;i++){

        if(a[i]>max){
            max=a[i];
        }}
        int arr[max+1];

        //printf("%d",max);



    





 for(int i=0;i<(max+1);i++){

    arr[i]=0;
    
    }




    for(int i=0;i<(max+1);i++){
    printf("%d\t",arr[i]);

}
printf("\n");

       for(int i=0;i<(max+1);i++){
    printf("%d\t",a[i]);

}
printf("\n");




for(int i=0;i<(max+1);i++){

    val= a[i];
    for(int j=0;j<max+1;j++){

        if(val==a[j]){
            count++;
        }
    }

    printf("%d\t",val);
    // printf("\n");
    //  printf("%d\t",count);
    if(arr[val]==0){
    arr[val]=count;}
    count=0;
}
printf("\n");
   for(int i=0;i<(max+1);i++){
    printf("%d\t",arr[i]);
}


int sum;
for(int i=1;i<max+1;i++){

    arr[i]+=arr[i-1];

}


printf("\n");
   for(int i=0;i<(max+1);i++){
    printf("%d\t",arr[i]);

}

       



}