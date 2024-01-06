bool subArrayExists(int arr[], int n)
    {
        //Your code here
        // for(int i=0;i<n-1;i++){
        //     int sum=0;
        //     for(int j=i;j<n;j++){
        //         sum+=arr[j];
        //         if(sum==0)
        //             return true;
        //     }
        // }
        // return false;
         int prefix_sum = 0;
        unordered_set<int> mp;
        for(int i = 0; i<n;i++)
        {
            prefix_sum += arr[i];
            if(prefix_sum == 0 || mp.find(prefix_sum) != mp.end())
            {
                return true;
            }
            mp.insert(prefix_sum);
        }
        return false;
    }
