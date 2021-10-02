#include <stdio.h>
#include <stdlib.h>
struct node{
    struct node* left;
    int data;
    struct node* right;
};
struct node* root=NULL;

struct node* newnode(int ele){
    struct node* newnode = malloc(sizeof(newnode));
    newnode->data=ele;
    newnode->left=NULL;
    newnode->right=NULL;
    return (newnode);
}

struct node* insert(struct node* parent,int ele){
    if(parent==NULL){
        return (newnode(ele));
    }
    else if(ele>parent->data){
        parent->right=insert(parent->right,ele);
    }
    else{
        parent->left=insert(parent->left,ele);
    }
    return (parent);
}

void inorder(struct node* root){
    if(root!=NULL){
        inorder(root->left);
        printf(" %d",root->data);
        inorder(root->right);
    }
}

void postorder(struct node* root){
    if(root!=NULL){
        postorder(root->left);
        postorder(root->right);
        printf(" %d",root->data);
    }
}

void preorder(struct node* root){
    if(root!=NULL){
        printf(" %d",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

int main(){
    int n,ele;
    scanf("%d",&n);
    scanf("%d",&ele);
    root=newnode(ele);
    for(int i=0;i<n-1;i++){
        scanf("%d",&ele);
        insert(root,ele);
    }
    char input;
    scanf("\n");
    scanf("%c",&input);
    switch(input){
        case 'a':
        printf("The inorder traversal is: ");
        inorder(root);
        break;
        case 'b':
        printf("The postorder traversal is: ");
        postorder(root);
        break;
        case 'c':
        printf("The preorder traversal is: ");
        preorder(root);
        break;
    }
    return 0;
}