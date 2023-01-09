#include<stdlib.h>
#include<stdio.h>
#define MAX 5

typedef struct queue_type

    {
        int arr[MAX];
        int front ;
        int rear;

    }node;

    void insert (node *q,int item){

        if((q->front==0&&q->rear==MAX-1)||q->front==q->rear+1)
        {
            printf("\nqueue overflow\n");

            return;

        }

    if(q-> front==-1)
    q->front=q->rear=0;

    else if (q-> rear==MAX-1)
    q->rear=0;

    else
    q->rear=q->rear+1;
    q->arr[q->rear]=item;

    }


    int delete (node *q){


        int val;
        if(q->front==-1)
        {
            printf("\nQueue underflow\n");
            return;
        }

        val=q->arr[q->front];
        if(q->front==q->rear)
        q->front=q->rear=-1;
        else if(q->front==MAX-1)        q->front=0;
        else
        q->front++;
        return val;
    }


    int main(){
        char ch;
        int val,item;
        node queue;
        queue.front=-1;
        queue.rear=-1;

        while (1)
        {
            printf("\nMAIN MENU\n");
            printf("ARRAY OF QUEUE\n");
            printf("1: INSERTION\n");
            printf("2: DELETION\n");
            printf("3: EXIT\n");
            printf("ENTER THE CHOICE: \n");
        // fflush(stdin);
        scanf("%c",&ch);

        switch(ch){

            case '1':
            printf("ENTER THE NUMBER TO PUSH: ");
            scanf("%d",&item);
            insert(&queue,item);
            break;
            case '2':

            val=delete(&queue);
            printf("deleted element is %d\n",val);
            break;

            case '3':

            exit(0);

        }
        
        
        }
        


    }