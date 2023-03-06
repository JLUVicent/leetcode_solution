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

    // 1.确定递归函数的参数和返回值
    TreeNode* construct(vector<int>& nums){
        // 定义新节点
        TreeNode* node = new TreeNode(0);
        // 2.确定终止条件
        if ( nums.size() == 1 ){
            // return new TreeNode[nums[0]];
            node->val = nums[0];
            return node;
        }
        // 3.确定单层递归逻辑
        // 找到最大值对应的值和索引
        // 中
        int maxValue = 0;
        int index = 0;
        for ( int i = 0; i < nums.size(); i++){
            if( nums[i] > maxValue){
                maxValue = nums[i];
                index = i;
            }
        }
        // 新建根节点
        // TreeNode* node = new TreeNode[maxValue];
        node->val = maxValue;
        // 左
        if ( index > 0 ){ //左闭右开
            vector<int> vec(nums.begin(),nums.begin()+index);
            node->left = construct( vec );
        }
        // 右
        if ( index < (nums.size() - 1)){//左闭右开
            vector<int> vec(nums.begin()+index+1,nums.end());
            node->right = construct( vec );
        } 
        return node;

    }


    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return construct( nums );

    }
};