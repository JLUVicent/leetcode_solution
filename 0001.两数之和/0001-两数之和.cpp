class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    //     // ʹ�ù�ϣ��洢���ֺͶ�Ӧ������
    //     unordered_map<int,int> map;
    //     for( int i = 0; i < nums.size(); i++){
    //         int t = target-nums[i];
    //         auto iter = map.find(t);
    //         if ( iter != map.end()){ //˵���ҵ������֮��Ϊtarget������ֱ�ӷ��ؼ���
    //             return { iter->second, i};
    //         }
    //         else{
    //             map.insert(pair<int,int>(nums[i],i ));
    //         }
    //     }
    //     return {};
        
    // }
    // ����
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