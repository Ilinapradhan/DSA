 vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> result ;
        result.push_back(intervals[0]);
        int j=0;
        for(int i=0 ; i<intervals.size() ; i++){
            if(result[j][1]>= intervals[i][0]){
                result[j][1]=max(intervals[i][1], result[j][1]);
            }
            else{
                j=j+1;
                result.push_back(intervals[i]);
            }
        }
        return result ;

    }
