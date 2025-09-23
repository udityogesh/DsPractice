#include<stdio.h>
#include<stdlib.h>
struct node{
    int info;
    struct node* next;
    struct node* prev;
};
struct node *head = NULL;
void createDLL(int data){
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->info = data;
    newNode->next = NULL;
    newNode->prev = NULL;
    if(head == NULL){
        head = newNode;
    }
    else{
        struct node * insert;
        insert = head ;
        while(insert->next != NULL){
            insert = insert->next;
        }
        insert->next = newNode;
        newNode->prev = insert;
    }
}
void insertAtpos(int pos, int data, int n){
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->info = data;
    newNode->next = NULL;
    newNode->prev = NULL;
    if(pos == 0){
        newNode->next = head;
        if(head != NULL)
            head->prev = newNode;
        head = newNode;
        return;
    }
    if(pos >= n){
        createDLL(data);
        return;
    }
    struct node* findPos = head;
    for(int i = 0; i < pos; i++){
        findPos = findPos->next;
    }

    newNode->prev = findPos->prev;
    newNode->next = findPos;
    if(findPos->prev != NULL)
        findPos->prev->next = newNode;
    findPos->prev = newNode;
}
void findMid(){
    if(head == NULL){
        printf("List is Empty");
    }
    struct node *fast;
    struct node *slow;
    slow = head;
    fast = head;
    while(fast != NULL && fast->next != NULL){
        fast = fast->next->next;
        slow = slow->next;
    }
    printf("mid node %d \t ",slow->info);
}
void sort(){
    
}
void displayF(){
    struct node *displayLL;
    displayLL = head;
    while(displayLL != NULL){
        printf("%d -> ",displayLL->info);
        displayLL = displayLL->next;
    }
}
int main(){
    int n ;
    printf("enter number of nodes");
    scanf("%d",&n);
    for(int i= 1 ; i <=n ; i++){
        printf("enter value %d ",i);
        int num;
        scanf("%d",&num);
        createDLL(num);
    }
    printf("enter num and pos");
    int pos,data;
    scanf("%d%d",&pos,&data);
    insertAtpos(pos,data,n);
    findMid();
    displayF();

    return 0 ;
}