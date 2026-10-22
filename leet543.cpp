#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int height (TreeNode* root){
        if(root == NULL){
            return 0;
        }
        int leftHt = height(root->left);
        int rightHt = height(root->right);
        return max(leftHt, rightHt) + 1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root == NULL){
            return 0;
        }
        int leftDiameter = diameterOfBinaryTree(root->left);
        int rightDiameter = diameterOfBinaryTree(root->right);
        int currDiameter = height(root->left) + height(root->right);
        return max(currDiameter , max(leftDiameter, rightDiameter));
    }
};