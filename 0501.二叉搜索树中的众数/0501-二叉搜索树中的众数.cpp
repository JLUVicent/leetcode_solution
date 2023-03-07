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
    // 双指针解决
    TreeNode* pre = NULL;   // pre指针
    int count = 0;          // 计数
    int MaxCount = 0;       // 最大数量
    vector<int> result;        // 结果数组
    //  1.确定递归函数的返回值和参数
    void traversal( TreeNode* cur ){
        // 2.确定终止条件
        if ( cur == NULL ) return;
        // 3.单层递归逻辑
        traversal( cur->left );    //左
        // 中
        if ( pre == NULL ) count = 1;   //计数初始化
        else if( pre->val == cur->val ) count++;   //如果两个指针的值相等计数加1
        else{
            count = 1;  
        }
        pre = cur;
        if( count == MaxCount ) result.push_back( cur->val );
        else if( count > MaxCount ){
            MaxCount = count;
            result.clear();
            result.push_back( cur->val);
        }
        traversal( cur->right );
        return ;
    }

    vector<int> findMode(TreeNode* root) {

        traversal( root );
        return result;
    }
};