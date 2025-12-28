/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int x) {
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    vector<int> bottomView(Node *root) {
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

            
                mp[hd] = nd->data;

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

/*
1.queue push
2.pop q
3.mp.push of node->data // only difference here we tracking the hd 

same as Level order traversal 
*/
