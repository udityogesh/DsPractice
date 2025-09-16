#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node {
    int info;
    struct node *next;

};
struct node *head = NULL;
int main()
{
    int n,i,data;
    printf("how many node you want to create in CSLL\t");
    scanf("%d", &n);
    for (i =1; i<= n; i++){
        struct node *new_node;
        new_node = (struct node *)malloc(sizeof(struct node));
        printf("enter the data in node %d\t", i);
        scanf("%d",&data);
        new_node-> info = data;
        if( head == NULL){
            head = new_node;
            head -> next = head;
        }
        else{
                struct node *insert;
                insert = head;
                while(insert-> next != head){
                    insert = insert -> next;
                }
                insert->next = new_node;
                new_node ->next =  head;
                head =  new_node;
            }
        }
    printf("\n");

    struct node *display;
    display =  head;
    if(display == NULL)
    {
        printf("CSLL is empty\n");
    }
    else
    {
    while (display ->next != head)
    
    {
        
        printf("%d\t", display -> info);
        display =display ->next;
    }
        printf("%d\t",display->info); 
}
}   