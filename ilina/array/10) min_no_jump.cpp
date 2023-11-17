 int minJumps(int arr[], int n){
        int maxreach= 0 ;
        int curreach = 0 ;
        int totaljump = 0 ;
        
        for(int i=0 ; i<n ; i++){
            if(i== n-1){
                break ;
            }
            
            if(i+arr[i] > maxreach){
                maxreach= i+ arr[i];
                
            }
            
            if(i == curreach){
                curreach = maxreach ;
                totaljump ++ ;
                
            }
            
            if(maxreach == i){
                return -1 ;
            }
        }
        
        return totaljump ;
    }

//apply brute's force algorithm (greedy approach )
