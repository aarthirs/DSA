class Solution {
public:
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        
        // Step 1: Create adjacency list
        vector<vector<int>> adj(V);
        for(auto edge : edges){
            int u = edge[0];
            int v = edge[1];
            adj[u].push_back(v);
        }

        // Step 2: Compute indegree
        vector<int> in(V, 0);
        for(int i = 0; i < V; i++){
            for(auto it : adj[i]){
                in[it]++;
            }
        }

        // Step 3: Push nodes with indegree 0
        queue<int> q;
        for(int i = 0; i < V; i++){
            if(in[i] == 0)
                q.push(i);
        }

        // Step 4: Kahn's algorithm
        vector<int> res;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            res.push_back(node);

            for(auto it : adj[node]){
                in[it]--;
                if(in[it] == 0)
                    q.push(it);
            }
        }

        return res;
    }
};
