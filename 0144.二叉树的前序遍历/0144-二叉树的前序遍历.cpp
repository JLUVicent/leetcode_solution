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
    //�ݹ麯���Ĳ����ͷ���ֵ
    void traversal(TreeNode* node, vector<int>& vec){
        //ȷ����ֹ����
        if( node == NULL) return;

        //ȷ������ݹ��߼�
        vec.push_back(node->val);//��
        traversal(node->left,vec);   //��
        traversal(node->right,vec); //��
    }

    vector<int> preorderTraversal(TreeNode* root) {
        // ʹ��ջ�����б���
        // stack<TreeNode*> st;
        // //�洢���
        // vector<int> result;
        // if( root == NULL ) return result;
        // st.push(root);
        // // result.push_back(root->val);
        // while( !st.empty() ){
        //     TreeNode* node = st.top();
        //     st.pop();
        //     result.push_back(node->val);
        //     if( node->right ) st.push(node->right);//��ջ�����Һ�����������
        //     if( node->left ) st.push(node->left);
        // }
        // return result;
        
        //�ݹ����
        vector<int> result;
        traversal(root,result);
        return result;
    }
};