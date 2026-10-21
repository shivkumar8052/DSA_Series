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
    if (n == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    n->left = NULL;
    n-> rigth = NULL;
    n->data = data;
    return n;
}


//Searching of an element in given BST taking recursively approach...........
// struct Node* Searching(struct Node* root, int key){
//     if(root == NULL){
//         return NULL;
//     }
//     if(root->data == key){
//         return root;
//     }
//     else if (root->data > key)
//     {
//        return Searching(root->left,key);
//     }
//     else{
//         return Searching(root->rigth,key);
//     }
  
// }

//Searching of an element in a given BST taking iterative approach..............

struct Node* SearchingIter(struct Node* root, int key){

   while (root != NULL)
   {
     if(key == root->data){
        return root;
    }
    else if (key< root->data)
    {
        root = root->left;
    }
    else{
        root = root ->rigth;
    }

   }
   return NULL;
   
    
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
    p->rigth = p2;
    p1->left = p3;
    p1->rigth = p4;
    p2->left = p5;
    p2->rigth = p6;

    struct Node* s = SearchingIter(p,key);

    if(s != NULL){
        printf("Found: %d", s->data);
    }
    else{
        printf( "%d Not found in given BST.",key);
    }
   
  
   
   


return 0;
}