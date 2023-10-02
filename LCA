

//directed graph
const int LOG = 14;
vector<int> graph[200005];
int up[200005][LOG];
int depth[200005];

void add(int u,int v){
    graph[u].push_back(v);
    graph[v].push_back(u);
}


void dfs(int x){
	for(auto u : graph[x]){
		depth[u] = depth[x]+1;

		for(int j = 1;j<LOG;j++){
			up[u][j]=up[up[u][j-1]][j-1];
		}
		dfs(u);
	}
}

int get_lca(int a,int b){

	if(depth[a]<depth[b]){
		swap(a,b);
	}

	int k = depth[a]-depth[b];

	for(int j = LOG-1;j>=0;j--){
		if(k&&(1<<j)){
			a = up[a][j];
		}
	}

	if(a==b){
		return a;
	}

	for(int j = LOG-1;j>=0;j--){
		if(up[a][j]!=up[b][j]){
			a = up[a][j];
			b = up[b][j];
		}
	}
	return up[a][0];
}
