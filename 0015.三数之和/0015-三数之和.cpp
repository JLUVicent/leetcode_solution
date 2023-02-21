class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        //����һ����ά����
        vector<vector<int>> result;
        // ��ԭ��������
        sort( nums.begin(),nums.end());
        // ��ʼ����
        for ( int i = 0; i < nums.size(); i++){
            // �����һ��Ԫ�ض�>0 ֱ��return
            if ( nums[i] > 0 ){
                return result;
            }
            // ��һ��Ԫ��ȥ��
            if ( i > 0 && nums[i] == nums[i-1] ) continue;
            // ��ʼ˫ָ�����
            int left = i+1;
            int right = nums.size() - 1;
            // ѭ��������result
            while( left < right ){
                // �ܺ�>0
                if (( nums[i] + nums[left] + nums[right]) > 0){
                    right--;
                }
                // �ܺ�<0
                else if (( nums[i] + nums[left] + nums[right]) < 0){
                    left++;
                }
                // ����Ԫ��
                else{
                    result.push_back(vector<int>{nums[i], nums[left], nums[right]});
                
                    // ������Ԫ��ȥ��
                    while (left < right && nums[right]==nums[right-1]){
                        right--;
                    }
                    // �ڶ���Ԫ��ȥ��
                    while (left < right && nums[left]==nums[left+1]){
                        left++;
                    }
                    //�ҵ����ƶ�˫ָ��
                    left++;
                    right--;               
            }
            }
        }
        return result;

    }
};