#include<Stdio.h>

int main(){

    int arr[10],lft=0,rft=9,med=(lft+rft)/2;
    int num;

    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }

    printf("value to be searched:");
    scanf("%d",&num);

    while (lft<=rft)
    {
        if(num>arr[med])
        lft=med+1;
        else if(num<arr[med])
        rft=med-1;
        else{
            printf("%d",med+1);
            break;
        }
        med=(lft+rft)/2;}

        if(lft>rft)
        printf("Doesn't exists");

    
    




    return 0;
}
