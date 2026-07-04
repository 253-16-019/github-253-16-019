#include<stdio.h>
#include<stdlib.h>

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
    while(head){
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

int exists(struct node* head, int data){
    while(head){
        if(head->data == data)
            return 1;
        head = head->next;
    }
    return 0;
}

void mergeUnique(struct node* X, struct node* L2, struct node** Z){

    while(X){
        if(!exists(*Z, X->data))
        insertEnd(Z, X->data);
        X = X->next;
    }

    while(L2){
        if(!exists(*Z, L2->data))
            insertEnd(Z, L2->data);
        L2 = L2->next;
    }
}

int main(){

    struct node *X = NULL, *list2 = NULL, *Z = NULL;

    // X list (from QA): 28 → 47 → 36
    insertEnd(&X, 28);
    insertEnd(&X, 47);
    insertEnd(&X, 36);

    // List 02: 13 → 25 → 31 → 16 → 56
    insertEnd(&list2, 13);
    insertEnd(&list2, 25);
    insertEnd(&list2, 31);
    insertEnd(&list2, 16);
    insertEnd(&list2, 56);

    printf("X List:\n");
    display(X);

    printf("List 02:\n");
    display(list2);

    mergeUnique(X, list2, &Z);

    printf("\nMerged List:\n");
    display(Z);

    return 0;
}