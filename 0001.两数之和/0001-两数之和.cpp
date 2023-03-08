class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> map;
        for( int i = 0; i < nums.size(); i++){
            int k = target - nums[i];
            auto iter = map.find(k);
            if( map.find(k) != map.end()){
                return { iter->second,i};
            }
            map.insert(pair<int,int>{nums[i],i});
        }
        return {};
    }
};