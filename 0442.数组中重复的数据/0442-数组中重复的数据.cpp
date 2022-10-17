class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        const int N = nums.size();
        vector<int> res;
        for (int i = 0; i < N; i++) {
            if (nums[abs(nums[i]) - 1] < 0)
                res.push_back(abs(nums[i]));
            nums[abs(nums[i]) - 1] *= -1;
        }
        return res;
    }
};
