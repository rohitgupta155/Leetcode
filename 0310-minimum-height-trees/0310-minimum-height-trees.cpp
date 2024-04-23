class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        // If there's only one node, return it as the root
        if (n == 1) return {0};
        
        // Create adjacency list using unordered_set for fast lookup
        vector<unordered_set<int>> adj(n);
        for (auto& e : edges) {
            adj[e[0]].insert(e[1]);
            adj[e[1]].insert(e[0]);
        }
        
        // Start BFS from leaf nodes
        queue<int> Q;
        for (int i = 0; i < n; ++i)
            if (adj[i].size() == 1) Q.push(i);
        
        // Perform BFS until only the root nodes remain
        while (n > 2) {
            int len = Q.size();
            n -= len;
            for (int i = 0; i < len; ++i) {
                int node = Q.front();
                Q.pop();
                for (auto& neighbor : adj[node]) {
                    adj[neighbor].erase(node);
                    if (adj[neighbor].size() == 1)
                        Q.push(neighbor);
                }
            }
        }
        
        // The remaining nodes are the roots of the minimum height trees
        vector<int> result;
        while (!Q.empty()) {
            result.push_back(Q.front());
            Q.pop();
        }
        return result;
    }
};