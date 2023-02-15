class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // // 双指针法
        // int slow = 0;
        // for ( int fast = 0; fast < nums.size(); fast++){
        //     if ( nums[fast] != val){
        //         nums[slow] = nums[fast];
        //         slow += 1;
        //     }
        // }
        // return slow;
        
        // // 暴力解法
        int size = nums.size();
        for (int i = 0; i < size; i++) {
            if (nums[i] == val) { // 发现需要移除的元素，就将数组集体向前移动一位
                for (int j = i; j < size-1; j++) {
                    nums[j] = nums[j+1];
                }
                i--;
                size--; // 此时数组的大小-1
            }
        }
        return size;

    }
};