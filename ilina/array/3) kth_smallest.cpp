int kthSmallest(int arr[], int l, int r, int k) {
        //code here
        // int n = sizeof(arr) / sizeof(arr[0]);
        // sort(arr , arr+n);
        // return arr[k-1];
        //T(n)=O(nlogn)
        priority_queue<int> pq;
        for(int i=0;i<k;i++){
            pq.push(arr[i]);
        }
        for(int i=k;i<=r;i++){
            if(arr[i]<pq.top()){
                pq.pop();
                pq.push(arr[i]);
            }
        }
        return pq.top();
        
    }
  //T(n)=O(n)
