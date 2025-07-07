class Solution {
public:
    int maxEvents(vector<vector<int>>& events) {
           sort(events.begin(), events.end());  // Sort events by start day

    priority_queue<int, vector<int>, greater<int>> pq; // min-heap of end days
    int i = 0, n = events.size(), day = 1, count = 0;

    while (i < n || !pq.empty()) {
        // Add all events that start today
        while (i < n && events[i][0] == day) {
            pq.push(events[i][1]);
            i++;
        }

        // Remove all events that ended before today
        while (!pq.empty() && pq.top() < day) {
            pq.pop();
        }

        // Attend the event that ends earliest
        if (!pq.empty()) {
            pq.pop();
            count++;
        }

        day++;
    }

    return count;
}
};