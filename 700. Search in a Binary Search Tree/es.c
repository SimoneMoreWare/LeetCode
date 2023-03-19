struct TreeNode *searchBST(struct TreeNode *root, int val) {
    struct TreeNode *p = root;
    while (p != NULL && p->val != val) {
        if (p->val > val) {
            p = p->left;
        } else {
            p = p->right;
        }
    }
    return p;
}

//https://leetcode.com/problems/search-in-a-binary-search-tree/description/
