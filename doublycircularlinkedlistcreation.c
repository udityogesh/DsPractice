#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node {
    int info;
    struct node*next;
    struct node* previous;
};
struct node* head =NULL;
struct node* new_node;
int main(){
printf("create a circular doubly linked list of nodes\n");
int n;
scanf("%d",&n);
for (int i = 0; i < n; i++)
{
    int data;
    printf("enter the data in CDLL\t");
    scanf("%d",&data);


new_node = (struct node*)malloc(sizeof(struct node));
new_node ->info = data;
if (head ==NULL){
    head = new_node;

    head ->previous =head;
    head->next =head;
}
else{
    struct node* insert = head ;
    while( insert -> next!= head){
        insert=insert->next;
    }
    new_node->previous = insert;
    new_node->next =  head;
    head->previous=new_node;
    insert-> next = new_node;
    head = new_node;
}
}

struct node *display;
display= head ;
while(display->next!=head){
     printf("%d\t", display -> info);
        display =display ->next;
    }
    printf("%d",display->info);
}
