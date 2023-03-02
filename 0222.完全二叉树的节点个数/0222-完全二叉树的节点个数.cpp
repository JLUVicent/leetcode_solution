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

    // // ��ͨ�������ⷨ ������� ʱ�临�Ӷȣ�O(n)
    // // 1.ȷ���ݹ麯���Ĳ����Լ�����ֵ
    // int getNum( TreeNode* node){
    //     // 2.ȷ����ֹ����
    //     if ( node == NULL ) return 0;
    //     // 3.ȷ������ݹ��߼�
    //     int leftNum = getNum( node->left ); //��
    //     int rightNum = getNum( node->right );//��
    //     int result = rightNum+leftNum+1;    //��
    //     return result;

    // }

    // ��ȫ�������Ľⷨ �������������˼·
    // 1.ȷ���ݹ麯���Ĳ����Լ�����ֵ
    int getNum( TreeNode* node){
        // 2.ȷ����ֹ����
        if ( node == NULL ) return 0;
        // ������������
        TreeNode* left = node->left;    //����������Ҫ������ֹ����֮��ע��ϸ��***********
        TreeNode* right = node->right;  //���ұ�������������壬��һ�ε�ʱ�����û�����������壬ֱ����while������node->left��ʵ�Ѿ��仯��
        // ����һ����ֹ�������ҵ���������������
        int leftDepth = 0 ;//����������� // �����ʼΪ0����Ŀ�ĵģ�Ϊ��������ָ������
        int rightDepth = 0 ;//�����������
        while ( left ){   //�������������
            left = left->left;
            leftDepth++;
        }
        while ( right ){  //�������������
            right = right->right;
            rightDepth++;
        }
        if (rightDepth == leftDepth ){
            return (2<<leftDepth) - 1; // ע��(2<<1) �൱��2^2������leftDepth��ʼΪ0
        }
        // ȷ������ݹ��߼�
        int leftNum = getNum( node->left);
        int rightNum = getNum( node->right );
        return leftNum+rightNum+1;

    }

    int countNodes(TreeNode* root) {
        return getNum( root );
    }
};