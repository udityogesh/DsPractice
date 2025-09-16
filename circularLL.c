#include<stdio.h>
#include<stdlib.h>
struct Node{
    int info;
    struct Node* next;
};
struct Node *head = NULL;
void insertNode(int data){
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->info = data;
    newNode->next = NULL;
    if(head == NULL){
        newNode->next=newNode;
        head = newNode;
    }
    else{
        struct Node *insert;
        insert = head;
        while(insert ->next != head){
            insert = insert->next;
        }
        insert->next = newNode;
        newNode->next = head;
    }
}
void displayLL(){
    struct Node *display;
    display = head;
    do{
        printf("%d  ",display->info);
        display = display->next;
    
      }while(display != head);
      printf("\n");
}
int main(){
    insertNode(3);
    insertNode(4);
    insertNode(5);
    insertNode(1);
    insertNode(6);
    insertNode(9);
    displayLL();
    
    return 0;
}