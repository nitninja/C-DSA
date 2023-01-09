#include <stdio.h>
#include <stdlib.h>
#define MAX 5

typedef struct stack_node
{
    int arr[MAX];
    int top;
}node;

void push(int num,node* ptr){


    if(ptr-> top==MAX-1){
        printf("Overflow!!\n");
    }
    else{
        ptr -> top++;
        ptr-> arr[ptr->top]=num;
        printf("Number pushed\n");
    }
}

void pop(node* ptr){

    int num;

    if(ptr->top<0){
        printf("Underflow\n");
    }
    else{
        num=ptr->arr[ptr->top];
        ptr->top--;
        printf("[%d] Number poped ",num);
    }
     return;

}


int main(){

    int num,i;
    node stack;
    stack.top=-1;
    char ch;

    

while(1){

     printf("MENU\n");
        printf("Array representation of stack\n");
        printf("1: Push\n");
        printf("2: Pop\n");
        printf("3: Exit\n");

        scanf("%c",&ch);

    switch (ch)
    {
    case '1':
            printf("Enter the element you want to add: ");
            scanf("%d",&num);
            push(num,&stack);
        break;
    case '2':
            pop(&stack);
            break;

    case '3':
            exit(0);

    }
    
}


}


// int func1(int n){

// static int i=0;
// if(n>0){

//     i++;
//     func1(n-1);
// }
// // printf("%d\t",i);
// return i;
// }

// int fuunc2(int n){
//     static int i=0;
//     // printf("%d\t\n",i);
//     if(n>0){
//         printf("%d\t\n",i);
//         i=i+func1(n);
//         fuunc2(n-1);
       
//     }
//     printf("%d\t",i);
//     return i;
// }

// int main(){


// fuunc2(5);

// return 0;
// }


