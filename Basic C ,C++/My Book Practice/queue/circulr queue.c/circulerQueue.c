#include<stdio.h>
#define MAX 5

int queue[MAX];
int front=-1,rare=-1;

void enqueue(int value){
    if((front==0 && rare==MAX-1) || (front==rare+1)){
        printf("Queue is Full(Overflow)");
        return;
    }
    if(front==-1){
        front=rare=0;
    }
    else if(rare==MAX-1){
        rare=0;
    }
    else{
        rare++;
    }
    queue[rare]=value;
    printf("\n%d is Inserted",value);

}

void dequeue(){
    if(front==-1){
        printf("Queue is Empty(UnderFlow)\n");
        return;
    }
    printf("%d removed",queue[front]);          
    
    if(front==rare){
        front=rare=-1;
    }

    else if(front==MAX-1){
        front=0;
    }

    else{
        front++;
    }
}

void display(){
    if(front==-1){
        printf("Queue is Empty");
        return;
    }
    printf("Queue: ");
    int i=front;

    while (1){
        printf("%d ",queue[i]);

        if(i==rare){
            break;
        }
        if(i==MAX-1){
            i=0;
        }
        else i++;
    }
    printf("\n");
}
int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);

    display();

    dequeue();
    dequeue();

    display();

    enqueue(60);
    enqueue(70);

    display();

    return 0;
}