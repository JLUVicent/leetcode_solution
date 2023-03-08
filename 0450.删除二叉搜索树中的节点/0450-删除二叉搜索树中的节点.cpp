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

    // ȷ���ݹ鷵��ֵ�Ͳ���
    TreeNode* deleteT(TreeNode* node,int val){
        // ȷ����ֹ����
        if( node == NULL ) return NULL;
        if ( node->val == val){
            // Ҷ�ӽڵ�
            if ( node->left == NULL && node->right == NULL ){       //���ؿռ�ɾ���ýڵ�
                return  NULL;
            }
            else if ( node->left ==NULL && node->right != NULL){    //�ҽڵ�ֱ��ָ���丸�ڵ�
                return node->right;
            }
            else if( node->left != NULL && node->right == NULL ){   //��ڵ�ֱ��ָ���丸�ڵ�
                return node->left;
            }
            else{
                TreeNode* cur = node->right;    
                while(cur->left != NULL ){
                    cur = cur->left;
                }
                cur->left = node->left;     //���ұ�����ȥ
                TreeNode* tmp = node;
                node = node->right;
                delete tmp;
                return node;
            }
        }
        // ����ݹ��߼�
        if( node->val < val ) node->right = deleteT( node->right,val);
        if( node->val > val ) node->left = deleteT( node->left,val);
        return node;
    }

    TreeNode* deleteNode(TreeNode* root, int key) {
        return deleteT( root,key);

    }
};