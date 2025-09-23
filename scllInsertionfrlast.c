#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
    int info;
    struct node *next;
};
struct node *head =NULL;
struct node *new_node;
struct node *insert;
struct node *display;
int main(){
    int n,i,data;
    printf("how many nodes you want in Linked List:");
    scanf("%d",&n);
    printf("\n");
    printf("creating a linked list of %d node",n);
    printf("\n");

    for(i=1;i<=n;i++){
        new_node = (struct node*)malloc(sizeof(struct node));
        printf("enter the data in new_node \t");
        scanf("%d",&data);
        new_node -> info =data;
        new_node -> next = NULL;
        if(head == NULL){
            head = new_node;
        }
        else if(head-> next == NULL){
            
        }


        }
    }
}