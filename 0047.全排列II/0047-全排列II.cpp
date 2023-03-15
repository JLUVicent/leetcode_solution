class Solution {
public:

    vector<int> path;
    vector<vector<int>> result;
    void backtracking(vector<int>& nums, vector<bool> used){
        // ȷ����ֹ����
        if( path.size() == nums.size()){
            result.push_back( path );
            return;
        }
        for ( int i = 0; i < nums.size(); i++){
            if(( i > 0 && nums[i] == nums[i-1] && !used[i-1]) || used[i]) continue;   //ȥ��
            // if( used[i] ) continue;
            path.push_back(nums[i]);
            used[i] = true;
            backtracking( nums,used );
            path.pop_back();    //����
            used[i] = false;//����
        }
    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());  //��Ҫ�ȶ������������
        vector<bool> used(nums.size(),false);
        backtracking( nums,used);
        return result;

    }
};