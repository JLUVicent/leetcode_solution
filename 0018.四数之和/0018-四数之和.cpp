class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        // ������ά����
        vector<vector<int>> result;
        // ��ԭ�����������
        sort( nums.begin(), nums.end());
        // ��һ����� ��һ��Ԫ��
        for ( int i = 0; i < nums.size(); i++){
            // ��֦����
            if ( nums[i] > target && nums[i] >= 0) break;
            // ȥ�ز���
            if ( i > 0 && nums[i] == nums[i-1] ) continue;
            // �ڶ������ �ڶ���Ԫ��
            for ( int t = i+1; t < nums.size(); t++){   //ע��ϸ�ڣ�������t++ ��ʼд��i++
                // ��֦����
                if ( nums[i]+nums[t] > target && nums[i]+nums[t] >= 0) break;
                // ȥ�ز���
                if ( t > i+1 && nums[t] == nums[t-1]) continue;
                int left = t+1;
                int right = nums.size()-1;
                while( left < right){
                    if ((long) nums[i] + nums[t] + nums[left] + nums[right] > target) right--;
                    else if ((long) nums[i] + nums[t] + nums[left] + nums[right] < target) left++;
                    else{
                        result.push_back(vector<int>{nums[i] , nums[t] , nums[left] , nums[right]});
                        while( left < right && nums[right]==nums[right-1]) right--;
                        while( left < right && nums[left]==nums[left+1]) left++;
                        // �ҵ��𰸻���˫ָ��
                        left++;
                        right--;
                    }

                }

            }
        }
        return result;

    }
};