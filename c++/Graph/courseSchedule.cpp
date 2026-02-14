class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {

        // Step 1: Create adjacency list
        vector<vector<int>> adj(numCourses);

        for(auto edge : prerequisites){
            int course = edge[0];
            int prereq = edge[1];

            adj[prereq].push_back(course);  
        }

        // Step 2: Compute indegree
        vector<int> in(numCourses, 0);

        for(int i = 0; i < numCourses; i++){
            for(auto it : adj[i]){
                in[it]++;
            }
        }

        // Step 3: Push indegree 0 nodes
        queue<int> q;
        for(int i = 0; i < numCourses; i++){
            if(in[i] == 0)
                q.push(i);
        }

        // Step 4: Kahn’s algorithm
        int count = 0;

        while(!q.empty()){
            int node = q.front();
            q.pop();
            count++;

            for(auto it : adj[node]){
                in[it]--;
                if(in[it] == 0)
                    q.push(it);
            }
        }

        return count == numCourses;
    }
};
