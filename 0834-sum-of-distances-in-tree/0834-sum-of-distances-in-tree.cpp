class Solution {
    vector<vector<int>> g;
    vector<int> count; // Number of nodes in subtree rooted at i
    vector<int> ans; // Sum of distances for each node
    vector<int> visited;

    void dfs(int node, int parent) {
        count[node] = 1;
        for (auto child : g[node]) {
            if (child != parent) {
                dfs(child, node);
                count[node] += count[child];
                ans[node] += ans[child] + count[child];
            }
        }
    }

    void dfs2(int node, int parent, int n) {
        for (auto child : g[node]) {
            if (child != parent) {
                ans[child] = ans[node] - count[child] + n - count[child];
                dfs2(child, node, n);
            }
        }
    }

public:
    vector<int> sumOfDistancesInTree(int n, vector<vector<int>>& edges) {
        g.resize(n);
        count.resize(n);
        ans.resize(n);
        visited.resize(n);

        for (auto edge : edges) {
            int u = edge[0];
            int v = edge[1];
            g[u].push_back(v);
            g[v].push_back(u);
        }

        dfs(0, -1); // Start DFS from node 0
        dfs2(0, -1, n); // Second DFS traversal to compute answer for each node

        return ans;
    }
};