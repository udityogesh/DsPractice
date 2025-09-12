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
    // delete from begining
    void deleteNode(){
        if(head == NULL){
            printf("underFlow Condition");
            head = NULL;
        }
        struct node* temp = head;
        head = head->next;
        temp->next = NULL;
        free(temp);
        temp=NULL;

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
    deleteNode();
    displayLL();
    
}