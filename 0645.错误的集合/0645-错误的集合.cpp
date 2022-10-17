class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> errorNums(2);
        int n=nums.size();
        //������ϣ��
        unordered_map<int,int> mp;
        for(auto&num:nums){
            mp[num]++;
        }
        for (int i=1;i<=n;i++){
            int count=mp[i];
            if(count==2){
                errorNums[0]=i;
            }else if(count==0){
                errorNums[1]=i;
            }
        }
    return errorNums;
    }
};