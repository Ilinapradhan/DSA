class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        // code here
        int count=0;
        unordered_map<int,int> mpp;
        
        for(int i=0;i<n;i++){
            
            if( mpp.find(k-arr[i]) != mpp.end() ){
                count+=mpp[k-arr[i]];
                mpp[arr[i]]++;
                
            }
            else{
                mpp[arr[i]]++;
            }
        }
        
      return count;
    }
};

