class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int,int> map;
        for(int i = 0;i < nums.size();i++){
            //判断目标值-nums[i]是否在map中
            int t = target - nums[i];
            auto iter = map.find(t);
            if( map.find(t) != map.end()){
                return { iter->second,i};
            }
            //如果没有匹配到，将元素加入到map中
            map.insert(pair<int,int>(nums[i],i));
        }
        return {};  
    }
};