#include<stdio.h>
void main(){
int x,y, *lrge,*small, *xptr,*yptr;
printf("Enter the value of x and y :");
scanf("%d%d",&x,&y);
xptr=&x;
yptr=&y;
if(*xptr>*yptr){
lrge=xptr;
small=yptr;}
else{
small=xptr;
lrge=yptr;}
printf("The largest nmuber is : %d\n",*lrge); 
int reducednum=*lrge;
int itr=lrge-small;
for(int i=0;i<itr;i++){
    lrge--;
    reducednum=*lrge;
    printf("%d\t",reducednum);
}
printf("After reduced: %d",reducednum);

}

