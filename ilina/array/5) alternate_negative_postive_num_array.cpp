void rearrange(int arr[], int n) {
	  queue<int> ne;
     queue<int> p;
    for(int i=0;i<n;i++){
        if(arr[i]<0)
            ne.push(arr[i]);
        else if(arr[i]>=0){
            p.push(arr[i]);
        }
    }
    for(int i=0 ; i<n ; i++){
        if(ne.size()==0){
            arr[i]=p.front();
            p.pop();
            
        }
        else if(p.size()==0){
            arr[i]=ne.front();
            ne.pop();
        }
        else{
            if(i%2==0){
                arr[i]=p.front();
                p.pop();
            
            }
            else{
                arr[i]=ne.front();
                ne.pop();
            }
        }
    }
	}
//T(n)=O(N)
