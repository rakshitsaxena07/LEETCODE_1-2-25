class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        if(intervals.empty()){
            return {newInterval};
        }
        int start=newInterval[0];
        int end=newInterval[1];
        

        for(int i=0;i<intervals.size();i++){
           if(intervals[i][1]>=start){
            intervals[i][1]=max(intervals[i][1], end);
            break;
           }
        }


        vector<vector<int>> res;
        for(int i=0;i<intervals.size();i++){
                if(res.empty() or res.back()[1]<intervals[i][0]){
                    res.push_back(intervals[i]);
                }
                else{
                    res.back()[1]=max(res.back()[1],intervals[i][1]);
                }
        }

        return res;
    }
};