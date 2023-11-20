  void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int p=INT_MIN;
        for(int i=n-2 ; i>=0 ; i--){
            if(nums[i+1]>nums[i]){
                p=i;
                break;
            }
        }
        if(p<0){
            reverse(nums.begin(), nums.end() );
        }
        else{

        int max=p+1;
        for(int j=p+2 ; j<n ; j++){
            if(nums[j]>nums[p] && nums[j]<=nums[max]){
                max=j;
            }
        }
        swap(nums[p] , nums[max] );
        reverse(nums.begin()+p+1 , nums.end());
        }
    }
