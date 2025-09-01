class Solution {
public:
    double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) {
       priority_queue<pair<double, pair<int, int>>> pq;
        
        for (auto& c : classes) {
            int pass = c[0];
            int total = c[1];
            double gain = (double)(pass + 1) / (total + 1) - (double)pass / total;
            pq.push({gain, {pass, total}});//Max heapify ->on the basis of gain
        }
        
        while (extraStudents--) {
            auto [currentGain, counts] = pq.top();
            pq.pop();
            int pass = counts.first + 1;
            int total = counts.second + 1;
            double newGain = (double)(pass + 1) / (total + 1) - (double)pass / total;
            pq.push({newGain, {pass, total}});
        }
        
        double totalRatio = 0.0;
        while (!pq.empty()) {
            auto [gain, counts] = pq.top();
            pq.pop();
            int pass = counts.first;
            int total = counts.second;
            totalRatio += (double)pass / total;
        }
        
        return totalRatio / classes.size();
    }
};