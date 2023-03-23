class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int slow = 0; 
        int fast = 0;
        for( int i = 0; i < nums.size(); i++){
            if( nums[i] != val){
                nums[slow] = nums[fast];
                slow++;
            }
            fast++;
        }
        return slow;
        // int slow = 0;
        // for( int fast = 0; fast < nums.size(); fast++){
        //     if( nums[fast] != val){
        //         nums[slow] = nums[fast];
        //         slow+=1;
        //     }
            
        // }
        // return slow;

    }
};