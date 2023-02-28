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

//  C++实现二叉树
// struct TreeNode{
//     int val;
//     TreeNode* left;
//     TreeNode* right;
//     TreeNode( int x):val(x),left(NULL),right(NULL){}
// };
class Solution {
public:

    // // 定义中序遍历函数
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
                //指针访问节点，访问到最底层
                st.push(cur);//将访问的节点放进栈
                cur = cur->left; //左
            }else{
                cur = st.top();//从栈里弹出的数据，就是要处理的数据
                st.pop();
                result.push_back(cur->val); //中
                cur = cur->right;           //右
            }
        }
        return result;
    }
};