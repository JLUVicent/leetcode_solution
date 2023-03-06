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

    // 1.ȷ���ݹ麯���Ĳ����ͷ���ֵ
    TreeNode* construct(vector<int>& nums){
        // �����½ڵ�
        TreeNode* node = new TreeNode(0);
        // 2.ȷ����ֹ����
        if ( nums.size() == 1 ){
            // return new TreeNode[nums[0]];
            node->val = nums[0];
            return node;
        }
        // 3.ȷ������ݹ��߼�
        // �ҵ����ֵ��Ӧ��ֵ������
        // ��
        int maxValue = 0;
        int index = 0;
        for ( int i = 0; i < nums.size(); i++){
            if( nums[i] > maxValue){
                maxValue = nums[i];
                index = i;
            }
        }
        // �½����ڵ�
        // TreeNode* node = new TreeNode[maxValue];
        node->val = maxValue;
        // ��
        if ( index > 0 ){ //����ҿ�
            vector<int> vec(nums.begin(),nums.begin()+index);
            node->left = construct( vec );
        }
        // ��
        if ( index < (nums.size() - 1)){//����ҿ�
            vector<int> vec(nums.begin()+index+1,nums.end());
            node->right = construct( vec );
        } 
        return node;

    }


    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return construct( nums );

    }
};