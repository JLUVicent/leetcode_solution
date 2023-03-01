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
        // ������д洢�ڵ���������
        queue<TreeNode*> que;
        // �����洢���ս��
        vector<vector<int>> result;
        // �ж�root�ڵ��Ƿ�Ϊ��
        if ( root != NULL ) que.push( root );
        // ѭ����ֹ���� ����Ϊ��
        while( !que.empty() ){
            // ��¼���еĴ�С
            int size = que.size(); //һ��ע��c++�����python��ͬ��Ҫдint
            vector<int> vec;    //�����洢ÿһ���Ԫ��
            while( size-- ){
                TreeNode* node = que.front(); //�洢ͷ���ڵ�
                que.pop(); //������ͷ�ڵ�
                vec.push_back(node->val);    //��Ԫ���������� ע������������Ԫ�ص�ֵ������node�ڵ�
                if(node->left) que.push(node->left); //��node����ڵ�������
                if(node->right) que.push(node->right); //��node���ҽڵ�������
            }
            result.push_back(vec);  //��vec����������
        }
        return result; //����ֵ

    }
};