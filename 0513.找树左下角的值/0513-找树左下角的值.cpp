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
    // ��������ȫ�ֱ���
    int MaxDepth = INT_MIN;
    int result;
    // 2.ʹ�õݹ����
    // ȷ���ݹ麯���ķ���ֵ�Ͳ���
    void traversal( TreeNode* node,int depth)
    {
        // ȷ����ֹ���� ���ҽڵ㶼Ϊ��
        if( node->left == NULL && node->right == NULL){
            if( depth > MaxDepth) {
                MaxDepth = depth;
                result = node->val;
            }
           
        }
        // ��
        if( node->left ){
            // depth++;
            // traversal( node->left,depth);
            // depth--;
            // �������
            traversal( node->left,depth+1);//ע�����д����depth��ֵ�ǲ����
        }
        // ��
        if ( node->right ){
            // depth++;
            // traversal( node->right,depth);
            // depth--;
            traversal( node->right,depth+1);
        }
    }


    int findBottomLeftValue(TreeNode* root) {
        // // 1.ʹ�ò������
        // // �������
        // queue<TreeNode*> que;
        // // ��¼���ֵ
        // int result = 0;
        // // ����ڵ㲻Ϊ��
        // if ( root != NULL ) que.push( root );
        // // ������в�Ϊ��
        // while( !que.empty() ){
        //     int size = que.size();   // �洢que�Ĵ�С 
        //     for(int i = 0;i<size; i++){
        //         TreeNode* node = que.front();   //��¼ͷ���ڵ�Ԫ��
        //         que.pop();
        //         if (i==0) result = node->val;   //��¼���һ�еĵ�һ��Ԫ��
        //         if(node->left) que.push(node->left);
        //         if(node->right) que.push(node->right);
        //     }
        // }
        // return result;
        traversal(root,0);
        return result;

    }
};