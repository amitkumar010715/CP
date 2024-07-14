
    struct Node* reverse(struct Node* root){
   struct Node* prev=NULL;
   struct Node* nxt=root;
   struct Node* temp=root;
   
   while (nxt)
   {
     nxt=temp->next;
     temp->next=prev;
     prev=temp;
     temp=nxt;
   }
   return prev;
}