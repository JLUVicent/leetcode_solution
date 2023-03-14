class Solution {
public:

    // �����Ž����ȫ�ֱ���
    vector<int> path;
    vector<vector<int>> result;
    void backtracking( vector<int>& nums,int startIndex,vector<bool>used){
        // ���ջ���
        result.push_back(path);
        if( startIndex >= nums.size()) return;

        // �����߼�
        for( int i = startIndex; i < nums.size(); i++){
            if( i > 0 && nums[i] == nums[i-1] && !used[i-1]) continue;  //ȷ��ǰһ��Ԫ���Ƿ�ʹ�ù�
            path.push_back(nums[i]);    //����Ԫ��
            used[i] = true;
            backtracking(nums,i+1,used);
            // ����
            path.pop_back();
            used[i] = false;
            
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        // �������������
        sort( nums.begin(), nums.end());        //����
        vector<bool> used(nums.size(),false);   //����ʹ������
        backtracking( nums,0,used);
        return result;
    }
};