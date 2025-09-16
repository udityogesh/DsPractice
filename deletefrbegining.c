#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
    struct node {
        int info ;
        struct node* next;
    };
    struct node*head = NULL;
    void insertNode(int data){
        struct node* newNode = (struct node*) malloc (sizeof(struct node));
        newNode->info = data;
        newNode->next = NULL;
        struct node* insert;
        if(head == NULL){
            head = newNode;
        }
        else {
            insert = head;
            while(insert->next !=NULL){
                insert = insert->next;
            }
            insert->next = newNode;
        }
        
    }
    void deleteNode(int data) {
    struct node* temp = head;
    struct node* prev = NULL;

    if (head == NULL) {
        printf("Underflow condition\n");
        return;
    }
    if (head->info == data) {
        head = head->next;
        free(temp);
        return;
    }

    while (temp != NULL && temp->info != data) {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL) {
        printf("Node with value %d not found\n", data);
        return;
    }
    prev->next = temp->next;
    free(temp);
}

    struct node* displayLL(){
        struct node* display;
        display = head;
        while(display != NULL){
            printf("%d  ",display->info);
            display = display->next;
        }
    }

int main(){
    insertNode(5);
    insertNode(6);
    insertNode(7);
    insertNode(7);
    insertNode(6);
    insertNode(9);
    insertNode(10);
    insertNode(13);
    displayLL();
    printf("\n");
    deleteNode(10);
    displayLL();
    
}