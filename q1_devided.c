#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node* createNode(int data){
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void insertEnd(struct node** head, int data){
    struct node* newNode = createNode(data);
    if(*head == NULL){
        *head = newNode;
        return;
    }
    struct node* temp = *head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
}

void display(struct node* head){
    while(head != NULL){
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

void divide(struct node* head, struct node** X, struct node** Y){
    while(head != NULL){
        if(head->data > 25 || head->data % 4 == 0)
            insertEnd(X, head->data);
        else
            insertEnd(Y, head->data);

        head = head->next;
    }
}

int main(){

    struct node *list1 = NULL;
    struct node *X = NULL, *Y = NULL;
    int n, value;

    printf("Enter number of elements in List1: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(int i = 0; i < n; i++){
        scanf("%d", &value);
        insertEnd(&list1, value);
    }

    printf("Original List:\n");
    display(list1);

    divide(list1, &X, &Y);

    printf("\nX List:\n");
    display(X);

    printf("\nY List:\n");
    display(Y);

    return 0;
}
