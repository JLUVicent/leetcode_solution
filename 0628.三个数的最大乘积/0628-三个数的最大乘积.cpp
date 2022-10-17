class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        //默认从小到大进行排序
        // sort(nums.begin(),nums.end());
        // int n=nums.size();
        // return max(nums[0]*nums[1]*nums[n-1],nums[n-1]*nums[n-2]*nums[n-3]);
        //第二种方法：找到最大的三个数和最小的两个数
        int min1=INT_MAX,min2=INT_MAX;
        int max1=INT_MIN,max2=INT_MIN,max3=INT_MIN;
        for(int x:nums){
            if(x<min1){
                min2=min1;
                min1=x;
            }else if(x<min2){
                min2=x;
            }
            if(x>max1){
                max3=max2;
                max2=max1;
                max1=x;
            }else if(x>max2){
                max3=max2;
                max2=x;
            }else if(x>max3){
                max3=x;
            }
        }
        return max(min2*min1*max1,max1*max2*max3);
    }
};