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
    // ˫ָ����
    TreeNode* pre = NULL;   // preָ��
    int count = 0;          // ����
    int MaxCount = 0;       // �������
    vector<int> result;        // �������
    //  1.ȷ���ݹ麯���ķ���ֵ�Ͳ���
    void traversal( TreeNode* cur ){
        // 2.ȷ����ֹ����
        if ( cur == NULL ) return;
        // 3.����ݹ��߼�
        traversal( cur->left );    //��
        // ��
        if ( pre == NULL ) count = 1;   //������ʼ��
        else if( pre->val == cur->val ) count++;   //�������ָ���ֵ��ȼ�����1
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