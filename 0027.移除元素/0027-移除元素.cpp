class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // ˫ָ�뷨
        int fast = 0;
        int slow = 0;
        for( int i = 0 ; i < nums.size(); i++){
            if( nums[i] != val ){
                nums[slow] = nums[fast];
                slow++;
            }
            fast++;
        }
        return slow;

    }
};