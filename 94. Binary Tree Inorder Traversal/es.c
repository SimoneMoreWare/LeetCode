/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
//https://leetcode.com/problems/binary-tree-inorder-traversal/description/
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

 void inorderTraversalR(struct TreeNode* root,int** returnSize,int *res){
     if(root==NULL) return;
     inorderTraversalR(root->left,returnSize,res);
     res[(**returnSize)++]=root->val;
     inorderTraversalR(root->right,returnSize,res);
 }
int* inorderTraversal(struct TreeNode* root, int* returnSize){
    int MAXDIM=101;
    int *res = (int *) malloc(MAXDIM*sizeof(int));

    (*returnSize)=0;
    inorderTraversalR(root,&returnSize,res);

    return res;

}

