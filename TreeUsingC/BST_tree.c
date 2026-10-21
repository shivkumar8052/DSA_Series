#include<stdio.h>
#include<malloc.h>
struct Node
{
   int data;
   struct Node*left;
   struct Node*rigth;
};

struct Node* createNode(int data){
    struct Node*n ;
    n = (struct Node*)malloc(sizeof(struct Node));
    n->left = NULL;
    n-> rigth = NULL;
    n->data = data;
    return n;
}
// void preorder(struct Node*root){
//     if(root != NULL){
//         printf("%d ", root->data);
//         preorder(root->left);
//         preorder(root->rigth);
//     }
// }

// void postOrder(struct Node*root){
//     if (root != NULL)
//     {
//       postOrder(root->left);
//       postOrder(root->rigth);
//       printf("%d ", root->data);
//     }
    
// }

void InOrder(struct Node*root){
    if(root != NULL){
        InOrder(root->left);
        printf("%d ", root->data);
        InOrder(root->rigth);
    }
}

int main(){
    struct Node*p = createNode(5);
    struct Node*p1 = createNode(3);
    struct Node*p2 = createNode(6);
    struct Node*p3 = createNode(1);
    struct Node*p4 = createNode(4);
    p->left = p1;
    p->rigth = p2;
    p1->left = p3;
    p1->rigth = p4;
  
    // preorder(p);
    // printf("\n");
    // postOrder(p);
    // printf("\n");
    InOrder(p);


return 0;
}