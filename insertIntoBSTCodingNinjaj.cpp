/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode
    {
    public:
        T val;
        TreeNode<T> *left, *right;
        TreeNode() : val(0), left(NULL), right(NULL) {}
        TreeNode(T x) : val(x), left(NULL), right(NULL) {}
        TreeNode(T x, TreeNode<T> *left, TreeNode<T> *right) : val(x), left(left), right(right) {}
    };


************************************************************/

TreeNode<int>* insertionInBST(TreeNode<int>* root, int val)
{
    // Write your code here.
    if(root==NULL)
    {
        root=new TreeNode<int>(val);
        return root;
    }
    if(val>=root->val)
    {
        if(root->right==NULL)
        {
            root->right=new TreeNode<int>(val);
        }
        else insertionInBST(root->right, val);
    }
    else
    {
        if(root->left==NULL)
        {
            root->left=new TreeNode<int>(val);
        }
        else insertionInBST(root->left,  val);
    }
    return root;
}