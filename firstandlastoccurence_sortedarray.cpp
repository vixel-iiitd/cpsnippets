
vector<int> searchRange(vector<int>& nums, int target) {
    vector<int> a;
        
    if(binary_search(nums.begin(),nums.end(),target)){
        
        int s = 0;
        int e =nums.size()-1;
        //end
        
        int end=-1;
        while(s<=e){
            
            int m= (s+e)/2;
            
            if((m==nums.size()-1 && nums[m]==target)|| nums[m]==target && nums[m+1]!=target){
                end=m;
                break;
            }
            
            if(nums[m]<=target){
                s = m+1;
            }else{
                e=m-1;
            }
        }
        
        s = 0;
        e =nums.size()-1;
        //start
        
        int start =-1;
        while(s<=e){
            
            int m= (s+e)/2;
            
            if((m==0 && nums[m]==target)|| nums[m]==target && nums[m-1]!=target){
                start=m;
                break;
            }
            
            if(nums[m]>=target){
                e = m-1;
            }else{
                s=m+1;
            }
        }
        
        a.push_back(start);
        a.push_back(end);
        return a;
        
        
    }else{
        a.push_back(-1);
        a.push_back(-1);
        return a;
    }
    
}
