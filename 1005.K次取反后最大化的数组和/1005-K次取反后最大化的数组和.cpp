class Solution {
static bool cmp(int a, int b){
    return abs(a) > abs(b);
}
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        int result = 0;
        sort(nums.begin(),nums.end(),cmp);  //��һ��
        // �ڶ���
        for( int i = 0; i < nums.size(); i++){
            if( nums[i] < 0 && k > 0){
                nums[i] *= -1;
                k--;
            }
        }
        if( k%2 == 1) nums[nums.size()-1] *= -1;    //������
        for( int i = 0; i < nums.size(); i++){  // ���Ĳ�
            result += nums[i];
        }
        return result;

    }
};