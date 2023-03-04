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
        // ʹ�ö��н��в������
        queue<TreeNode*> que;
        // �洢���ս��
        vector<vector<int>> result;
        // �ڵ㲻Ϊ�ս�root�������
        if ( root != NULL ) que.push( root );
        // �����в�Ϊ��
        while ( !que.empty() ){
            // �ȼ�¼���еĴ�С
            int size = que.size();
            // ��������洢Ԫ��
            vector<int> vec;
            while( size-- ){
                // �洢ͷ���ڵ�
                TreeNode* node = que.front();   //�洢ͷ���ڵ�
                que.pop();  //����ͷ���ڵ�
                vec.push_back(node->val);   //���ڵ��������
                if(node->left) que.push(node->left);
                if(node->right) que.push(node->right);
            }
            result.push_back(vec);  //��¼ÿһ��Ľ��
        }
        return result;

    }
};