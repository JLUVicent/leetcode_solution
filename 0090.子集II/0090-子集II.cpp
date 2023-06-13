class Solution {
public:

    vector<int> path;
    vector<vector<int>> res;
    void backTracking(vector<int>& nums, int startIndex, vector<bool>& used){
        res.push_back(path);
        if( startIndex >= nums.size()){
            return;
        }

        for( int i = startIndex; i < nums.size(); i++){
            if( i != 0 && nums[i] == nums[i-1] && !used[i-1]) continue;
            path.push_back(nums[i]);
            used[i] = true;
            backTracking(nums,i+1,used);
            path.pop_back();
            used[i] = false;
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<bool> used(nums.size(),false);
        backTracking(nums,0,used);
        return res;
    }
};