#include<stdio.h>

void ascii(){
    double num=1;
    int a= 1;
    
    while (a<=378){
        
        printf("|%d| = |%c|\t",a,a);
        num=(num+a)+num;
        
        a++;
        printf("@ <%lf>\n",num);
    

    }}

     int main(){


         ascii();
         return 0;


     


}