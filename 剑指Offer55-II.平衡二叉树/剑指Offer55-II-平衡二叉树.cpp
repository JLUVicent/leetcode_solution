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
    // �ж��Ƿ�Ϊƽ�������
    // 1.ȷ���ݹ麯���Ĳ����ͷ���ֵ
    int getHeight( TreeNode* node){
        // 2.ȷ����ֹ����
        if ( node == NULL ) return false;
        // 3.ȷ������ݹ��߼�
        int leftHeight = getHeight( node->left ); //��ȡ��ڵ�����
        if ( leftHeight == -1) return -1;        //�����߶�Ϊ-1 ��ֱ�ӷ���-1 �жϵȺ�ע�⣡����
        int rightHeight = getHeight( node->right ); //��ȡ�ҽڵ�����
        if ( rightHeight == -1 ) return -1;      //����ҽڵ�߶�Ϊ-1,ֱ�ӷ���-1
        int result; //��¼���
        if ( abs(rightHeight-leftHeight) > 1) result = -1; //���������ƽ�������Ҫ��ֱ�ӷ���-1
        else { result = 1 + max(leftHeight,rightHeight);}  //��ڵ�ĸ߶�
        return result; 
    }
    bool isBalanced(TreeNode* root) {
        int result = getHeight(root);
        if (result == -1){
            return false;
        }
        else{ return true;}
    }
};