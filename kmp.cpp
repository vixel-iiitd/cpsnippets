
//kmp algo to find if subarray b is in a, 
//it can be modified for string as well,
//for subarray in rotation make a = a+a as array the use kmp

vector<int> lps(vector<int> &pat){
    vector<int> lp(pat.size()+1);

    int ix = 1;

    int iy = 1;


    while(ix!=pat.size()){  

        if(pat[ix]==pat[iy-1]){
            lp[ix+1] = iy;
            iy++;
        }else{
            lp[ix+1]=0;
            iy = 1;
        }
        ix++;
    }

    return lp;
}

bool kmp(vector<int>& a,vector<int>& b){

    int n = a.size();

    b.insert(b.begin(),0);

    vector<int> lp = lps(b);    


    int ix = 0;

    rep(i,0,n){

        if(b[ix+1]==a[i]){
            ix++;
        }else{
            while(ix!=0 && b[ix+1]!=a[i]){
                ix = lp[ix];
            }

            if(b[ix+1]==a[i]){
                ix++;
            }
        }

        if(ix==b.size()-1){
            return true;
        }
    }

    return false;
}

