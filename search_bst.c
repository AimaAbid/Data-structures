
#include <stdio.h>
#include <stdlib.h>
 
struct Node {
    int key;
    struct Node *left, *right;
};


 
// A utility function to create a new BST Node
struct Node* newNode(int item)
{
    struct Node* temp
        = (struct Node*)malloc(sizeof(struct Node));
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}
 
// A utility function to do inorder traversal of BST
void inorder(struct Node* root)
{
    if (root != NULL) {
        inorder(root->left);
        printf("%d \n", root->key);
        inorder(root->right);
    }
}
 
/* A utility function to insert
   a new Node with given key in
 * BST */
struct Node* insert(struct Node* Node, int key)
{
    /* If the tree is empty, return a new Node */
    if (Node == NULL)
        return newNode(key);
 
    /* Otherwise, recur down the tree */
    if (key < Node->key)
        Node->left = insert(Node->left, key);
    else if (key > Node->key)
        Node->right = insert(Node->right, key);
 
    /* return the (unchanged) Node pointer */
    return Node;
}

struct Node* search(struct Node* root,int key)
{
    int flag=0;
    struct Node* papu=NULL;
    if(root==NULL || root->key==key)
    {
        return root;
        flag=1;
    }
    if(key<root->key)
    {
        return search(root->left,key);
    }

    if(key>root->key)
    {
        return search(root->right,key);
    }
    if(flag==0)//if element not found return null pointer
    {
        return papu;
    }
}


 
// Driver Code
int main()
{
    /* Let us create following BST
              50
           /     \
          30      70
         /  \    /  \
       20   40  60   80 */
    struct Node* root = NULL;
    root = insert(root, 50);

    struct Node*temp=NULL;
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);


     temp=search(root,75);
     
     
    if(temp==NULL)//if search returns null ponter that means element not found
    {             //if it returns any other pointer element found
        printf("Element not found\n");
    }
    else
    {
        printf("Element found\n");
    }
        
    
    

    inorder(root);
 
    return 0;
}