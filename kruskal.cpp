// minimum spanningtree.

vector<pair<int,pair<int,int>>> graph;

void add(int u,int v,int w){
    graph.push_back({w,{u,v}});
}

int id[200005];

void initialize(){
    for(int i =0;i<200005;i++){
        id[i]=i;
    }
}

int root(int x){
    while(id[x] != x)
    {
        id[x] = id[id[x]];
        x = id[x];
    }
    return x;
}


void union1(int x, int y)
{
    int p = root(x);
    int q = root(y);
    id[p] = id[q];
}


ll kruskal(){

    ll sum =0;
    for(int i =0;i<graph.size();i++){

        ll weight = graph[i].first;
        int x = graph[i].second.first;
        int y=graph[i].second.second;
        
        if(root(x)!=root(y)){
            sum+=weight;
            union1(x,y);
        }
    }
    return sum;
}
