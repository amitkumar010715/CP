    Node * removeDuplicates( Node *head) 
    {
     // your code goes here
     unordered_map<int,int>mp;
     Node* temp= new Node(-1);
     Node* h=temp;
     
     while(head){
         mp[head->data]++;
         if(mp[head->data]<2){
         temp->next=new Node(head->data);// create new node and also store in temp->next
         temp=temp->next;
         }
         head=head->next;
     }
     return h->next;// except -1
    }



      //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
        // Add code here
        vector<int>v;
        while(head){
            v.push_back(head->data);
            head=head->next;
        }
        sort(v.begin(),v.end());
        Node *temp=new Node(-1);
        Node *h=temp;
        // temp=temp->next;
     for(auto x:v){
         temp->next=new Node(x);// create new node and also store in temp->next
         temp=temp->next;
     }
     return h->next;// except -1
        
    }