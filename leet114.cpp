#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    TreeNode* lastVisitedNode = NULL;
    void flatten(TreeNode* root) {
        if(root == NULL){
            return;
        }
        flatten(root->left);
        flatten(root->right);

        root->left = NULL;
        root->right = lastVisitedNode;
        lastVisitedNode = root;

    }
};