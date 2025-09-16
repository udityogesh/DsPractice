#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node{
    struct node *next;
    struct node *previous;
     struct node *info;
};
struct node * head =  NULL;
struct node * new_node;
int main(){
    printf("create a doubly Linked List of 3 node \n");
    struct node* new_node = (struct node)malloc(sizeof(struct node));
    new_node -> info = 10;
    head = new_node;
    new_node -> previous = NULL;
    new_node -> next = NULL;

    printf("%d",head->  next);
}