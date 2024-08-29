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
 TreeNode* arrayToBST(vector<int>&v,int l,int r)
 {
    if(l>r) return NULL;
    int mid=(l+r)/2;
    TreeNode* root=new TreeNode(v[mid]);
    TreeNode* leftRoot=arrayToBST(v,l,mid-1);
    TreeNode* rightRoot=arrayToBST(v,mid+1,r);
    root->left=leftRoot;
    root->right=rightRoot;
    return root;
 }
class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int l=0, r=nums.size()-1;
        TreeNode* root=arrayToBST(nums,l,r);
        return root;

        
    }
};