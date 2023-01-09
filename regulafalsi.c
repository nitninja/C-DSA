// #include<stdio.h>
// #include<math.h>
//    #define f(x) (3*x)+sin(x)-exp(x)
// int f(float x){

//     double result;
//     result=(3*x)+sin(x)-exp(x);
//     return result;

// }


// int main(){
//         float  x1,x0,aerr,mitr;
//         scanf("%f%f%f%f",&x1,&x0,&aerr,&mitr);
//         int itr=0;
//         // double f1,f0;
//         // f1=f(x1);
//         // f0=f(x0);
//     if((f(x1)*f(x0))<0){

//     }


// }

#include<stdio.h>
   #include<math.h>
   

   float f(float x){

       float result;
    result=(3*x)+sin(x)-exp(x);
    return result;

}
   void main()
   {
    int i=0;
    float x0,x1,x2,x4,f1,f2,f0;
    
        scanf("%f%f",&x0,&x1);
    do
    {
        f0=f(x0);
        f1=f(x1);
        x2=x0-((f0*(x1-x0))/(f1-f0));
        f2=f(x2);
        printf("\n%f %f %f %f %f %f",x0,x1,x2,f0,f1,f2);
        if(f0*f2<0)
        {x1=x2;
        }
        else
        {
            x0 = x2;
        }
        i++;
    }
    while(i<10);
    x4=x0-((f0*(x1-x0))/(f1-f0));
    printf("\nroot = %f",x4);
  } 