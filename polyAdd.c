#include<stdio.h>
#include<stdlib.h>
struct node{
    int c,p;
    struct node *next;
};
void createPoly(struct node **head , int co ,int po){
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->c = co;
    newNode->p = po;
    newNode->next = NULL;
    if(*head == NULL){
        *head= newNode;
    }
    else{
        struct node *insert = *head;
        while(insert->next != NULL){
            insert = insert->next;
        }
        insert->next = newNode;
    }
}
struct node* add(struct node* poly1,struct node* poly2){
    struct node *result = NULL;
    while(poly1 != NULL && poly2 != NULL){
        if(poly1->p > poly2->p){
            createPoly(&result,poly1->c,poly1->p);
            poly1 =poly1->next;
        }
        else if(poly2->p >poly1->p){
            createPoly(&result,poly2->c,poly2->p);
            poly2 =poly2->next;
        }
        else{
            int sum = poly1->c+poly2->c;
            if(sum != 0){
                createPoly(&result,sum,poly1->p);
                poly1= poly1->next;
                poly2 = poly2->next;
            }
        }
    }
    while(poly1 != NULL){
        createPoly(&result,poly1->c,poly1->p);
        poly1 = poly1->next;
    }
    while(poly2 != NULL){
        createPoly(&result,poly2->c,poly2->p);
        poly2 = poly2->next;
    }
    return result;
}
void displayPoly(struct node* poly){
    while(poly!=NULL){
        printf("%dx^%d",poly->c,poly->p);
        if(poly->next != NULL){
            printf("+");
        }
        poly = poly->next;
    }    
}
int main(){
    struct node *Poly1 = NULL,*Poly2 = NULL ,*Add = NULL;
    int n ;
    printf("enter Number of terms in first Polynomial ");
    scanf("%d",&n);
    for(int i = 1 ;i<=n  ;i ++){
        int co ,po;
        printf("enter coefficent and power of Term",1,"\t");
        scanf("%d%d",&co,&po);
        createPoly(&Poly1,co,po);
    }
    int m ;
    printf("enter Number of terms in second Polynomial ");
    scanf("%d",&m);
    for(int i = 1 ;i<=m  ;i ++){
        int co ,po;
        printf("enter coefficent and power of Term\t",i);
        scanf("%d%d",&co,&po);
        createPoly(&Poly2,co,po);
    }
    printf("First POLYNOMIAL\t");
    displayPoly(Poly1);
    printf("\n");
    printf("Second POLYNOMIAL\t");
    displayPoly(Poly2);
    printf("\n");
    Add = add(Poly1,Poly2);
    printf("ADDITION of POLY1 AND POLY2\t");
    displayPoly(Add);
    return 0;
}