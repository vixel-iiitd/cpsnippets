class Disjoint {
public:
 
    int vertices;
    vector<int> parent , rank;
 
    Disjoint(int v) {
 
        vertices = v;
 
        parent.assign(v+1 , -1);
        rank.assign(v+1 , 1);
    }
 
    void printer() {
 
        cout<<"parent"<<endl;
 
        for (int i = 1 ; i<=vertices ; i++) {
 
            cout<<i<<" "<<parent[i]<<endl;
        }
 
        cout<<"rank"<<endl;
 
        for (int i = 1 ; i<=vertices ; i++) {
 
            cout<<i<<" "<<rank[i]<<endl;
        }
    }
 
 
    int find(int n) {
 
        if (parent[n] < 0) {
            return n;
        }
 
        return parent[n] = find(parent[n]);
    }
 
 
    void merge(int a , int b) {
 
        int x = find(a);
        int y = find(b);
 
        if (x==y) {
            return;
        }
 
        if (rank[x] > rank[y]) {
 
            parent[y] = x;
            rank[x] += rank[y];
 
        }
 
        else {
 
            parent[x] = y;
            rank[y] += rank[x];
 
        }
    }
 
};
