#include<stdio.h>
#include<stdlib.h>
#include<iostream>

struct node {
    int data;
    struct node *next;
} *top=NULL;

void display(){
    struct node *p;
    p=top;
    while(p!=NULL){
        printf("%d ",p->data);
        p=p->next;
    }
    printf("\n");
}

void push(int key){
    struct node *q;
    q=(struct node *)malloc(sizeof(struct node));

    if(q==NULL){
        printf("Stack Overflow\n");
    }
    else{
        q->data=key;
        q->next=top;
        top=q;
    }
}

int pop(){
    struct node *q;
    int x=-1;

    if(top==NULL){
        printf("Stack Underflow\n");
    }
    else{
        q=top;
        top=top->next;
        x=q->data;
        free(q);
    }
    return x;
}

void is_full(){
    struct node *q;
    q=(struct node *)malloc(sizeof(struct node));

    if(q==NULL)
        printf("Full!!\n");
    else
        printf("Not Full!!\n");
    free(q);
}

void is_empty(){
    if(top==NULL)
        printf("Empty!!\n");
    else
        printf("Not Empty!!\n");

}

int stack_top(){
    if(top!=NULL)
        return top->data;
    else
        return -1;
}

int main(){
    
    push(2);
    push(3);
    push(6);

    display();

    printf("%d\n",pop());
    display();

    return 0;
}

