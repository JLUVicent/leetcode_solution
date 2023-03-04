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
class Solution {
public:

    vector<vector<int>> result;
    vector<int> path;
    // 递归函数不用返回值，遍历整个树
    void traversal( TreeNode* cur,int count){
        if(!cur->left && !cur->right && count == 0){
            result.push_back(path);
            return;
        }

        if(!cur->left && !cur->right ) return; //遇到叶子节点并没有找到合适的边，返回

        if(cur->left){
            // 左
            path.push_back(cur->left->val);
            count -=cur->left->val;
            traversal(cur->left,count); //递归
            count += cur->left->val;    //回溯
            path.pop_back();            //回溯
        }
        if(cur->right){
            // 右
            path.push_back(cur->right->val);
            count -=cur->right->val;
            traversal(cur->right,count);    //递归
            count +=cur->right->val;        //回溯
            path.pop_back();                //回溯
        }
        return;

    }

    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        if (root == NULL) return result;
        path.push_back(root->val);  //把根节点放入路径
        traversal(root,targetSum-root->val);
        return result;
    }
};