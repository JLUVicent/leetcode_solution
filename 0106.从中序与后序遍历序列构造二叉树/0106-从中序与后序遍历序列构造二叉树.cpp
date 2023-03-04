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

    TreeNode* traversal(vector<int>& inorder,vector<int>& postorder){
        // ȷ����ֹ����
        // ��һ��
        if ( postorder.size()==0 ) return NULL;

        // �ڶ��� ��������������һ��Ԫ�أ����ǵ�ǰ���м�ڵ�
        int rootValue = postorder[postorder.size()-1];
        TreeNode* root = new TreeNode(rootValue);

        // ֻ��һ�����ڵ�
        if( postorder.size() == 1) return root;

        // ������ �ҵ����������и��
        int delimiterIndex;
        for( delimiterIndex = 0; delimiterIndex < inorder.size();delimiterIndex++){
            if( inorder[delimiterIndex] == rootValue ) break;
        }
        // ��ʱ�õ��и������delimiterIndex
        // ���Ĳ� �и���������
        // ����ҿ����䣺[0,delimiterIndex)
        vector<int> leftInorder(inorder.begin(),inorder.begin() + delimiterIndex);
        // [delimiterIndex+1,end)
        vector<int> rightInorder( inorder.begin() + delimiterIndex + 1,inorder.end());

        // postorder ����ĩβԪ��
        postorder.resize( postorder.size() - 1 );

        // ���岽 �и��������
        // ��Ȼ����ҿ���ע������ʹ��������������Ĵ�С��Ϊ�и��
        // [0,leftInorder.size)
        vector<int> leftPostorder( postorder.begin(),postorder.begin() + leftInorder.size());
        // [leftInorder.size(), end)
        vector<int> rightPostorder( postorder.begin() + leftInorder.size(),postorder.end());

        root->left = traversal( leftInorder,leftPostorder);
        root->right = traversal( rightInorder,rightPostorder);

        return root;
    }

    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        if ( inorder.size() == 0 || postorder.size() == 0) return NULL;
        return traversal(inorder,postorder);


    }
};