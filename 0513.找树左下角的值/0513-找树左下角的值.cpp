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
    // 定义两个全局变量
    int MaxDepth = INT_MIN;
    int result;
    // 2.使用递归遍历
    // 确定递归函数的返回值和参数
    void traversal( TreeNode* node,int depth)
    {
        // 确定终止条件 左右节点都为空
        if( node->left == NULL && node->right == NULL){
            if( depth > MaxDepth) {
                MaxDepth = depth;
                result = node->val;
            }
           
        }
        // 左
        if( node->left ){
            // depth++;
            // traversal( node->left,depth);
            // depth--;
            // 精简代码
            traversal( node->left,depth+1);//注意这块写法，depth的值是不变的
        }
        // 右
        if ( node->right ){
            // depth++;
            // traversal( node->right,depth);
            // depth--;
            traversal( node->right,depth+1);
        }
    }


    int findBottomLeftValue(TreeNode* root) {
        // // 1.使用层序遍历
        // // 定义队列
        // queue<TreeNode*> que;
        // // 记录结果值
        // int result = 0;
        // // 如果节点不为空
        // if ( root != NULL ) que.push( root );
        // // 如果队列不为空
        // while( !que.empty() ){
        //     int size = que.size();   // 存储que的大小 
        //     for(int i = 0;i<size; i++){
        //         TreeNode* node = que.front();   //记录头部节点元素
        //         que.pop();
        //         if (i==0) result = node->val;   //记录最后一行的第一个元素
        //         if(node->left) que.push(node->left);
        //         if(node->right) que.push(node->right);
        //     }
        // }
        // return result;
        traversal(root,0);
        return result;

    }
};