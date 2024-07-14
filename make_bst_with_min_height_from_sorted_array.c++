     
     
     
    /*minimum height and  balanced bst*/
      Node* construct_bst(int s,int e,vector<int>&v){// sorted arr
          if(s>e){
              return NULL;
          }
          int mid=s+(e-s)/2;
         Node* root=new Node(v[mid]);
          root->left=construct_bst(s,mid-1,v);
          root->right=construct_bst(mid+1,e,v);
          return root;
      }