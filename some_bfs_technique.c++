/*if ask shortest distance or time from ***{many source}** in graph 
then first store the all src in queue=> taki hum jab pop kare 
to unka child queue me already present element ke bad aye 
*/

// example: covid spread , Geek's Village and Well

int dx[4]={0,-1,0,1};
   int dy[4]={-1,0,1,0};
    int helpaterp(vector<vector<int>> hospital)
    {
        //code here
        int n=hospital.size();
        int m=hospital[0].size();
        
        queue<pair<int,pair<int,int>>>q;
        vector<vector<int>>visited(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(hospital[i][j]==2){
                    q.push({0,{i,j}});// sara store karlo pahle taki child inke  bad aye
                    visited[i][j]=1;
                    
                }
            }
        }
        
        int time=0;
        while(!q.empty()){
            auto top=q.front();
            q.pop();
            for(int k=0;k<4;k++){
                int nr=top.second.first+dx[k];
                int nc=top.second.second+dy[k];
                time=top.first;
                if(nr>=0 && nr<n && nc>=0 && nc<m && !visited[nr][nc]  && hospital[nr][nc]==1){
                    hospital[nr][nc]=2;
                    q.push({time+1,{nr,nc}});
                    visited[nr][nc]=1;
                }
            }
        }
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(hospital[i][j]==1){
                    return -1;
                }
            }
        }
        return time;
    }
