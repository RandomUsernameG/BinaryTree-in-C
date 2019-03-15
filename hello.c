#include<stdio.h> 
#include<stdlib.h> 


struct node{
int data;
struct node* left;
struct node* right;
};

 struct node* newNode(int data){
  struct node *root =  (struct node *)malloc(sizeof(struct node)); 
    root->data = data; 
    root->left = NULL; 
    root->right = NULL;
    return root; 
}

struct node* insert(struct node* node,int data){
  if (node == NULL)
    return newNode(data); 
  if (data < node->data) 
    node->left  = insert(node->left, data); 
  else if (data > node->data) 
    node->right = insert(node->right, data);
  return node;   
}


int main() {

  struct node*  root = insert(NULL,34);
    insert(root, 40); 
    insert(root, 23); 
    insert(root, 37); 
    insert(root, 45); 
printf("%d \n", root->data); 
printf("%d \n", root->left->data);
 printf("%d \n", root->right->data);
printf("%d \n", root->right->left->data);  
printf("%d \n", root->right->right->data); 

  
   
   return 0;
}