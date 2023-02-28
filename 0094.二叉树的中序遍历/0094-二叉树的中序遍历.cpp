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

//  C++ʵ�ֶ�����
// struct TreeNode{
//     int val;
//     TreeNode* left;
//     TreeNode* right;
//     TreeNode( int x):val(x),left(NULL),right(NULL){}
// };
class Solution {
public:

    // // ���������������
    // void Traversal( TreeNode* cur , vector<int>& vec){
    //     if ( cur == NULL){
    //         return;
    //     }
    //     Traversal( cur -> left,vec);
    //     vec.push_back( cur->val );
    //     Traversal( cur -> right,vec);
    // }

    vector<int> inorderTraversal(TreeNode* root) {
        // vector<int> result;
        // Traversal( root , result);
        // return result;

        vector<int> result;
        stack<TreeNode*> st;
        TreeNode* cur = root;
        while( cur != NULL || !st.empty()){
            if ( cur != NULL){
                //ָ����ʽڵ㣬���ʵ���ײ�
                st.push(cur);//�����ʵĽڵ�Ž�ջ
                cur = cur->left; //��
            }else{
                cur = st.top();//��ջ�ﵯ�������ݣ�����Ҫ���������
                st.pop();
                result.push_back(cur->val); //��
                cur = cur->right;           //��
            }
        }
        return result;
    }
};