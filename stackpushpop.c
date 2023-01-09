#include<stdlib.h>
#include<stdio.h>
#define MAX 5

typedef struct stack_node
{
    int arr[MAX];
    int top;
}node;

void push (int item ,node* ptr){
    if (ptr->top ==MAX-1){
        printf("overflow\n");
        printf("can't push anymore element in stack\n");
        }
    else {
        ptr->top++;
        ptr->arr[ptr->top]=item;
        printf("element is pushed\n");
    }
}


void pop(node *ptr){
    int item;

    if(ptr->top<0)
        printf("underflow\n");

    else
    {
        item =ptr ->arr[ptr ->top];
        ptr->top--;
        printf("element [%d] poped from stack\n",item);
    }
    return;
}

int main(){
    int  i,item;
    char  ch;
    node stack;
    stack.top=-1;

    while(1){
        // system ("cls");
        printf("MENU\n");
        printf("Array representation of stack\n");
        printf("1: Push\n");
        printf("2: Pop\n");
        printf("3: Exit\n");

        // fflush(stdin);
        scanf("%c",&ch);
        switch(ch)
        {
            case '1':
            printf("Enter the element you want to add: ");
            scanf("%d",&item);
            push (item,&stack);
            break;
            case '2':
            pop(&stack);
            break;

            case '3':
            exit(0);

        }
    }
}