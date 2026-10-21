#include<stdio.h>
#include<malloc.h>
struct Node
{
   int data;
   struct Node*left;
   struct Node*right;
};

struct Node* createNode(int data){
    struct Node*n ;
    n = (struct Node*)malloc(sizeof(struct Node));
    if (n == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    n->left = NULL;
    n-> right = NULL;
    n->data = data;
    return n;
}

void InOrder(struct Node*root){
    if(root != NULL){
        InOrder(root->left);
        printf("%d ", root->data);
        InOrder(root->right);
    }
}


void Insert(struct Node* root, int key){
    struct Node*prev = NULL;
    while (root != NULL)
    {
        prev = root;
        if(key == root ->data){
            printf("%d cann't insert in given BST %d, Alredy exiting in BST.",key,key);
            return;
        }
        else if (key<root->data)
        {
            root = root->left;
        }
        else{
            root = root->right;
        }
        
    }

    struct Node* new = createNode(key);
    if(key<prev->data){
        prev->left = new;
    }
    else{
        prev->right = new;
    }
    
}


int main(){

    int key ;
    printf("Enter the value of key: ");
    scanf("%d",&key);

    struct Node*p = createNode(50);
    struct Node*p1 = createNode(40);
    struct Node*p2 = createNode(60);
    struct Node*p3 = createNode(30);
    struct Node*p4 = createNode(45);
    struct Node*p5 = createNode(55);
    struct Node*p6 = createNode(70);
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
    p2->left = p5;
    p2->right = p6;

  Insert(p,key);
  printf("\n");
  InOrder(p);

   
  
   
   


return 0;
}