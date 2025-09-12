#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
    int info;
    struct node *next;
};
struct node *head = NULL;
struct node *newNode;
struct node *insert;
struct node *display;
int main(){
    printf("How many nodes you want to create: ");
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        newNode = (struct node*)malloc(sizeof(struct node));
        printf("Enter data for node %d: ", i+1);
        scanf("%d", &newNode->info);
        newNode->next = head;
        head = newNode;
    }
    display = head;
    printf("The linked list is: ");
    while(display != NULL){
        printf("%d -> ", display->info);
        display = display->next;
   }
    printf("NULL\n");
    return 0;
}