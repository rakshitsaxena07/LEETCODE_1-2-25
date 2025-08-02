class Solution {
public:
    long long minCost(vector<int>& basket1, vector<int>& basket2) {
        unordered_map<int,int>ump1;
        unordered_map<int,int>ump2;
        for(auto it:basket1){
            ump1[it]++;
        }
        for(auto it:basket2){
            ump2[it]++;
        }
    
    unordered_map<int, int> totalCount;
    for (auto& [fruit, cnt] : ump1) totalCount[fruit] += cnt;
    for (auto& [fruit, cnt] : ump2) totalCount[fruit] += cnt;
    
    for (auto& [fruit, cnt] : totalCount) {
        if (cnt % 2 != 0) return -1;
    }
    
    vector<int> swapList1, swapList2;
    int minFruit = INT_MAX;
    for (auto& [fruit, cnt] : totalCount) {
        int diff = (ump1[fruit] - ump2[fruit]) / 2;
        if (diff > 0) {
            for (int i = 0; i < diff; ++i) swapList1.push_back(fruit);
        } else if (diff < 0) {
            for (int i = 0; i < -diff; ++i) swapList2.push_back(fruit);
        }
        minFruit = min(minFruit, fruit);
    }
    
    sort(swapList1.begin(), swapList1.end());
    sort(swapList2.begin(), swapList2.end());
    
    long long cost = 0;
    int n = swapList1.size();
    for (int i = 0; i < n; ++i) {
        cost += min(min(swapList1[i], swapList2[n - 1 - i]), 2 * minFruit);
    }
    
    return cost;
}
};