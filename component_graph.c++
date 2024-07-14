  /*  given graph is component of graph                           
    7                         
 /    \          5          2
5      9          \           \
  \   /            5           9
    4
*/



note:
graph having defferent component matlab some disjoin graph 
then we can't simply call dfs(src) but we have to call for every node as src given bellow

for(int i=0;i<v;i++){
    if(!visited[i]){
        dfs(i);
    }
}






************
note about graph:
if we have upto end in all path with left,right,down,up :
then     
        take as:
          while(nrow>=0 && nrow<n && ncol>=0 && ncol<m);
        istead of using  if(nrow>=0 && nrow<n && ncol>=0 && ncol<m);
            