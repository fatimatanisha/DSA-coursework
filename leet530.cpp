#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
class Solution
{
public:
    TreeNode *prev = NULL;

    int getMinimumDifference(TreeNode *root)
    {
        if (root == NULL)
        {
            return INT_MAX;
        }
        int ans = INT_MAX;
        if (root->left != NULL)
        {
            int leftMin = getMinimumDifference(root->left);
            ans = min(ans, leftMin);
        }
        if (prev != NULL)
        {
            ans = min(ans, root->val - prev->val);
        }
        prev = root;
        if (root->right != NULL)
        {
            int rightMin = getMinimumDifference(root->right);
            ans = min(ans, rightMin);
        }
        return ans;
    }
};