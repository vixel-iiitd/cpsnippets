
class segmentTree{
public:
	vi arr,tree;
	ll n;
	ll k;
	// if k==-1 then min operation
	// if k==0 then sum operation
	// if k==1 then max operation
	segmentTree(ll n1,ll k1){
		n=n1;
		assert(k==1 or k==0 or k==-1);
		k=k1;
		arr.resize(n);
		tree.resize(4*n);
	}
	ll oprn(ll a,ll b){
		if(k==0)
			return a+b;
		else if(k==-1)
			return min(a,b);
		else if(k==1)
			return max(a,b);
	}
	ll getLimit(){
		if(k==0)
			return 0;
		else if(k==-1)
			return INT_MAX;
		else if(k==1)
			return INT_MIN;
	}
	void build(ll st,ll en,ll ind=1){
		if(st==en){
			tree[ind]=arr[st];
			return;
		}
		ll mid=(st+en)/2;
		build(st,mid,2*ind);
		build(mid+1,en,2*ind+1);
		tree[ind]=oprn(tree[2*ind],tree[2*ind+1]);
		return;
	}
	void update(ll st,ll en,ll upd,ll val,ll ind=1){
		// no overlap
		if(upd>en or upd<st){
			return;
		}
		if(st==en){
			tree[ind]=val;
			return;
		}
		// left and right
		ll mid=(st+en)/2;
		update(st,mid,upd,val,2*ind);
		update(mid+1,en,upd,val,2*ind+1);
		tree[ind]=oprn(tree[2*ind],tree[2*ind+1]);
		return;
	}
	ll query(ll st,ll en,ll qst,ll qen,ll ind=1){
		// complete overlap
		if(st>=qst and en<=qen){
			return tree[ind];
		}
		// no overlap
		if(st>qen or en<qst){
			return getLimit();
		}
		ll mid=(st+en)/2;
		ll left=query(st,mid,qst,qen,2*ind);
		ll right=query(mid+1,en,qst,qen,2*ind+1);
		return oprn(left,right);
	}
	void setArray(ll n){
		for(ll i=1;i<=n;i++){
			cin>>arr[i];
		}
	}
};
