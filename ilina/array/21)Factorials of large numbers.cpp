vector<int> factorial(int N){
        // code here
         int carry=0,multi=0;
    vector<int>arr ;
    arr.push_back(1);
        
    for(int i=1;i<=N;i++){
        
        for(int j= 0;j<arr.size();j++) {
            multi = (arr[j] * i)+carry;   
            arr[j] = multi % 10;
            
            carry = multi/10;
 
        }
        while(carry){
            arr.push_back(carry%10);
            carry=carry/10;
        }
        
    }
    reverse(arr.begin(),arr.end());
    return arr;
    }
