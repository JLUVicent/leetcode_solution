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
    vector<vector<int>> levelOrder(TreeNode* root) {
        // 使用队列进行层序遍历
        queue<TreeNode*> que;
        // 存储最终结果
        vector<vector<int>> result;
        // 节点不为空将root加入队列
        if ( root != NULL ) que.push( root );
        // 当队列不为空
        while ( !que.empty() ){
            // 先记录队列的大小
            int size = que.size();
            // 定义数组存储元素
            vector<int> vec;
            while( size-- ){
                // 存储头部节点
                TreeNode* node = que.front();   //存储头部节点
                que.pop();  //弹出头部节点
                vec.push_back(node->val);   //将节点加入数组
                if(node->left) que.push(node->left);
                if(node->right) que.push(node->right);
            }
            result.push_back(vec);  //记录每一层的结果
        }
        return result;

    }
};