vector<int> graph[200005];
bool vis[200005]{false};
 
void add(int u,int v){
    graph[u].push_back(v);
    graph[v].push_back(u);
}

void bfs(int node){

    queue<int> q;
    q.push(node);


    while(q.size()!=0){

        int x = q.front();
        q.pop();

        vis[x]=true;


        rep(i,0,graph[x].size()){
            int v= graph[x][i];

            if(!vis[v]){
                q.push(v);
            }
        }
    }
}
