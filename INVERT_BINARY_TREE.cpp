class TreeNode
{
    public:
    int val;
    TreeNode*left;
    TreeNode*right;
    TreeNode(int val)
    {
        this->val=val;
        this-left=NULL;
        this-right=NULL;
    }
};

//Iterative solution//
(BFS)

TreeNode*invertbinarytree(TreeNode*root)
{
    if(root==NULL)
    {
        return NULL;
    }
    std::queue<TreeNode*> q;
    q.push(root);
    while(!q.empty())
    {
        TreeNode*n=q.front();
        q.pop();
        TreeNode*temp=n->left;
        n->left=n->right;
        n->right=temp;
        if(n->left)
        {
            q.push(n->left);
        }
        if(n->right)
        {
            q.push(n->right);
        }
    }
    return root;
}

// RECURSIVE (DFS) //
   void swapleftright(TreeNode*root)
    {
        TreeNode*temp=root->left;
        root->left=root->right;
        root->right=temp;
    }
    
    void solve(TreeNode*root)
    {
        if(root==NULL)
        {
            return;
        }
        swapleftright(root);
        solve(root->left);
        solve(root->right);
    }
    
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL)
        {
            return NULL;
        }
        solve(root);
        return root;
    }

