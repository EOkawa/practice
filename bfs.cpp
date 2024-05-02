/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

// Average of level

#include <vector>
#include <queue>

class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {

        queue<TreeNode*> q;
        vector<double> r;
        TreeNode* temp;
        int count = 0;
        int i = 0;
        int size = 0;

        q.push(root);

        while (!q.empty()) {

            r.push_back(0);
            size = q.size();

            for (i = 0; i < size; i++) {
                cout << q.size() << endl;
                temp = q.front();
                q.pop();

                r[count] += (double)temp->val;

                if (temp->left) q.push(temp->left);
                if (temp->right) q.push(temp->right);
            }
            r[count] = r[count]/(double)size;
            count++;
        }
        return r;
    }
};