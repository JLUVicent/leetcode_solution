class Solution {
public:

    vector<int> path;
    vector<vector<int>> res;
    void backTracking(vector<int>& nums, int startIndex){
        res.push_back(path);
        if( startIndex >= nums.size()) return;  //ÖÕÖ¹Ìõ¼ş

        for( int i = startIndex; i  < nums.size(); i++){
            path.push_back(nums[i]);
            backTracking(nums,i+1);
            path.pop_back();
        }
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        backTracking(nums,0);
        return res;
    }
};