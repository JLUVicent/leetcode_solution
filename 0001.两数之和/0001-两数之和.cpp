class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    //     // 使用哈希表存储数字和对应的索引
    //     unordered_map<int,int> map;
    //     for( int i = 0; i < nums.size(); i++){
    //         int t = target-nums[i];
    //         auto iter = map.find(t);
    //         if ( iter != map.end()){ //说明找到了相加之和为target的数，直接返回即可
    //             return { iter->second, i};
    //         }
    //         else{
    //             map.insert(pair<int,int>(nums[i],i ));
    //         }
    //     }
    //     return {};
        
    // }
    // 暴力
    for( int i = 0; i <nums.size(); i++){
        for( int j = i+1; j < nums.size(); j++){
            if( (nums[i] + nums[j]) == target){
                return { i , j};
            }
        }
        
    }
    return {};
    }    
};