 int findDuplicate(vector<int>& nums) {
        int n=0 ;
        sort(nums.begin(), nums.end());
        for(int i=0 ; i< nums.size() ; i++){
            // if(count(nums.begin(), nums.end(), nums[i])>1){
                // n=nums[i];
            // }
            if(nums[i]==nums[i+1]){
                n=nums[i];
                break ;
            }
        }
        return n ;
    }

// count method exceed time limit 
// with constant space 
