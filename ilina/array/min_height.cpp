int getMinDiff(int arr[], int n, int k) {
        // code here
        sort(arr, arr + n);
        int mn =0 , mx=0 ;
        int ans=arr[n-1]-arr[0];
        for(int i=0 ; i<n ; i++){
            if(arr[i]-k < 0){
                continue ;
            }
            int tall = arr[i];
            int smallvalue = tall -k;
            int small = arr[i-1];
            int tallvalue = small +k ;
            mn=min(smallvalue , arr[0] + k);
            mx=max(tallvalue , arr[n-1] - k);
            
            ans=min(ans , mx-mn);
        }
        return ans ;
    }
