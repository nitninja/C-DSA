#include<stdio.h>

int print(int scam){
    return printf("%d",scam);
}

int main(){
int n;
int arr[n],k;
int ele;
// scan(n);
scanf("%d",&n);
for (int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
scanf("%d",&ele);
for(int i=0;i<n;i++){
    if(ele==arr[i]){
        print(i);
        break;
        
    }
    if(i==n-1){
    printf("Does't Exists");
    
    }
}

}