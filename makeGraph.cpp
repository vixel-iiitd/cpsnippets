
vector<int> graph[200005];
bool vis[200005]{false};
 
void add(int u,int v){
    graph[u].push_back(v);
    graph[v].push_back(u);
}
