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

    TreeNode* traversal( vector<int>& vec,int left,int right){
        // 2.ȷ����ֹ����
        if( left > right ) return NULL;
        // ȡ�м�ڵ�
        int mid = (left + right ) / 2;
        // �����µĽڵ�
        TreeNode* node = new TreeNode(vec[mid]);
        node->left = traversal( vec,left, mid-1);    //������ڵ�
        node->right = traversal( vec, mid+1,right );    //����������
        return node;

    }

    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return traversal( nums , 0, nums.size()-1);

    }
};