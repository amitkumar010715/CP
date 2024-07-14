// circular doubly link list== doubly link list + head and tail ka connection.
 

// Q.BINARY TREE TO CDLL 

// brute force


class Solution
{
   
  public:
    
    void inorder(Node* root,vector<int>&v){
        if(root==NULL){
            return;
        }
        inorder(root->left,v);
        v.push_back(root->data);
        inorder(root->right,v);
    }
    
    
    
    
    Node *bTreeToCList(Node *root)
    {
        vector<int>v;
        inorder(root,v);
       
        Node* head=NULL;
        Node* prev=NULL;
        Node* curr=NULL;
      
        for(auto x:v){
            curr=newNode(x);
          if(head==NULL){
             head=prev=curr;
          } 
          prev->right=curr;
          curr->left=prev;
          prev=curr;
           
            
        }
        prev->right=head;
        head->left=prev;
        return head;
      

        
    }
};