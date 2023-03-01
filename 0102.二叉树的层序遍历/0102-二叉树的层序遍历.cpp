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
        // 定义队列存储节点用来遍历
        queue<TreeNode*> que;
        // 用来存储最终结果
        vector<vector<int>> result;
        // 判断root节点是否为空
        if ( root != NULL ) que.push( root );
        // 循环终止条件 队列为空
        while( !que.empty() ){
            // 记录队列的大小
            int size = que.size(); //一定注意c++定义和python不同，要写int
            vector<int> vec;    //容器存储每一层的元素
            while( size-- ){
                TreeNode* node = que.front(); //存储头部节点
                que.pop(); //弹出队头节点
                vec.push_back(node->val);    //将元素推入数组 注意这里是推入元素的值，而非node节点
                if(node->left) que.push(node->left); //将node的左节点加入队列
                if(node->right) que.push(node->right); //将node的右节点加入队列
            }
            result.push_back(vec);  //将vec加入结果数组
        }
        return result; //返回值

    }
};