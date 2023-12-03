int getPairsCount(int arr[], int n, int k) {
        // code here
        // int co=0 ;
        // for(int i=0 ; i<n ; i++){
        //     int f = k-arr[i];
        //     int c=count(arr+i+1 , arr+n , f);
        //     co=co+c;
        // }
        // return co ;
        unordered_map<int,int>mp;
        int count=0;
        int rem=0;
        for(int i=0;i<n;i++){
           rem=k-arr[i];
           if(mp.find(rem)!=mp.end())
           count+=mp[rem];
           mp[arr[i]]++;
        }
        return count;
}
