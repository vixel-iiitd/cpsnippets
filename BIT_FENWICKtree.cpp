
class Fenwick{
public:
    int n;
    vector<int> BIT;
    Fenwick(int _n) : n(_n) {
        BIT.assign(n+1, 0);
    }
    int query(int ind) {
        if(ind==0) return 0;
        int sum = 0;
        while(ind > 0) {
            sum += BIT[ind];
            ind -= ind&-ind;
        }
        return sum;
    }
    void update(int ind, int x){
        if(ind==0) return;
        while(ind < BIT.size()) {
            BIT[ind] += x;
            ind += ind&-ind;
        }
    }
    int rangeSum(int l, int r) {
        return query(r) - query(l-1);
    }
    int whichGreater(int k){
        int lo = 1, hi = n;
        while(hi > lo){
            int mid =(hi+lo)/2;
            if(query(mid) >= k) hi = mid;
            else lo = mid + 1;
        }
        return hi;
    }
};
