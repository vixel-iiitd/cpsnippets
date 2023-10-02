
void dfs(int x){

    vis[x]=true;


    rep(i,0,graph[x].size()){
        int v = graph[x][i];

        if(!vis[v]){
            dfs(v);
        }
    }

}
