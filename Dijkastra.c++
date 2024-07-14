class Solution
{
	public:
	      int maxi=1e9;
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int v, vector<vector<int>> adj[], int s)
    {
        // Code here
        vector<pair<int,int>>ad[v];
        for(int i=0;i<v;i++){
            for(auto x:adj[i]){
                // for(auto y:x){
                  ad[i].push_back({x[0],x[1]});  
                // }
               
            } 
        }
        
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        pq.push({0,s});
        vector<int>dist(v,maxi);
        dist[s]=0;
        while(!pq.empty()){
            int u=pq.top().second;
            int wt=pq.top().first;
            pq.pop();
            
            if(dist[u]<wt)continue; // or  isliye iss wale path se age ka safer nahi karenge kyoki isko koi aur chhota karega.
            for(auto x:ad[u]){
                int v=x.first;
                int w=x.second;
                if(dist[u]+w<dist[v]){
                    dist[v]=dist[u]+w;
                    pq.push({dist[v],v});
                }
            }
        }
        for(int i=0;i<v;i++){
            if(dist[i]==maxi)dist[i]=0;
        }
       return dist;
        
    }
};