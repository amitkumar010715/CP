#include<bits/stdc++.h>
using namespace std;

typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
    struct node *parr;
    /*for creating new node in link list*/
    // struct node *next;
    // node(int x){
    //     data=x;
    //     next=NULL;
    // }
}node;

int k_ancestor(node * new_node,int k){

while (k)
{
    if (new_node->parr==NULL)
    {
     return -1;
    }
    new_node=new_node->parr;
    k--;
}
return new_node->data;

}
void store_parr(node *root,node *p){
    node *temp=root;
    if (temp!=NULL)
    {
        temp->parr=p;
        p=temp;
    store_parr(temp->left,p);
    store_parr(temp->right,p);
    }
    
}



 node *insert( node *root, int val)
{
     node *newnode = new node();
    newnode->data = val;
    newnode->left = NULL;
    newnode->right = NULL;

    if (root == NULL)
    {
        return newnode;
    }
    if (root->data > val)
    {
        root->left = insert(root->left, val);
    }
    else if (root->data < val)
    {
        root->right = insert(root->right, val);
    }
    return root;
}


int main(int argc, char const *argv[])
{

    node *root = NULL;
    // int data, n;
    // printf("enter the value of n:");
    // scanf("%d", &n);
    // printf("enter the val for creating tree: ");
    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     scanf("%d", &arr[i]);
    //     root = insert(root, arr[i]);
    // }


  /* Let us create following BST
              50
           /     \
          30      70
         /  \    /  \
       20   40  60   80 */
 
    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 70);
    root = insert(root, 60);
    root = insert(root, 80);
 
 
store_parr(root,NULL);//store parrent of every node

cout<<"enter the value of k:"<<" ";
int k;
cin>>k;
node *new_node=root->right->left;
cout<<k_ancestor(new_node,k);
    return 0; 
}