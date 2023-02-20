class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int,int> map;
        for(int i = 0;i < nums.size();i++){
            //�ж�Ŀ��ֵ-nums[i]�Ƿ���map��
            int t = target - nums[i];
            auto iter = map.find(t);
            if( map.find(t) != map.end()){
                return { iter->second,i};
            }
            //���û��ƥ�䵽����Ԫ�ؼ��뵽map��
            map.insert(pair<int,int>(nums[i],i));
        }
        return {};  
    }
};