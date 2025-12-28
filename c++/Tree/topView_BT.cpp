/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    vector<int> topView(Node *root) {
        if (!root) return {};

        queue<pair<Node*, int>> q;
        map<int, int> mp;
        vector<int> resArr;

        q.push({root, 0});

        while (!q.empty()) {
            auto p = q.front();
            q.pop();

            Node* nd = p.first;
            int hd = p.second;

            // store only first occurrence
            if (mp.find(hd) == mp.end()) {
                mp[hd] = nd->data;
            }

            if (nd->left) 
                q.push({nd->left, hd - 1});

            if (nd->right) 
                q.push({nd->right, hd + 1});
        }

        for (auto &it : mp) {
            resArr.push_back(it.second);
        }

        return resArr;
    }
};
