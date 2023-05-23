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

    void traversal(TreeNode* node,vector<int>& path,vector<string>& res){
        path.push_back(node->val);
        if( node->left == NULL && node->right == NULL){
            string sPath;
            for( int i = 0; i < path.size() - 1; i++){
                sPath += to_string(path[i]);
                sPath += "->";
            }
            sPath += to_string(path[path.size() - 1]);
            res.push_back(sPath);
            return;
        }
        //×ó
        if(node->left){
            traversal(node->left,path,res);
            path.pop_back();
        }
        if( node->right){
            traversal(node->right,path,res);
            path.pop_back();
        }
    }

    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> res;
        vector<int> path;
        if(root == NULL) return res;
        traversal(root,path,res);
        return res;

    }
};