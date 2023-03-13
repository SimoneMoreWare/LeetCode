/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 https://leetcode.com/problems/binary-tree-postorder-traversal/description/
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

void postorderTraversalR(struct TreeNode* root, int** returnSize,int *res){

    if(root==NULL) return;

    postorderTraversalR(root->left,returnSize,res);
    postorderTraversalR(root->right,returnSize,res);
    res[(**returnSize)++]=root->val;


}

int* postorderTraversal(struct TreeNode* root, int* returnSize){
    
    int MAXDIM=100;
    int *res = (int *) malloc(MAXDIM*sizeof(int));
    *returnSize = 0;

    postorderTraversalR(root,&returnSize,res);

    return res;

}
