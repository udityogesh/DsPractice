#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
    struct node* next;
    int info;
};
struct node *head = NULL;

int main(){
    struct node* new_node = (struct node*)malloc(sizeof(struct node));
    new_node -> info = 10;
    new_node -> next = head;
    head = new_node;
    printf("%d",new_node->info);
    
} 
