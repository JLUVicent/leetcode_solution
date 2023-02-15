class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // // ˫ָ�뷨
        // int slow = 0;
        // for ( int fast = 0; fast < nums.size(); fast++){
        //     if ( nums[fast] != val){
        //         nums[slow] = nums[fast];
        //         slow += 1;
        //     }
        // }
        // return slow;
        
        // // �����ⷨ
        int size = nums.size();
        for (int i = 0; i < size; i++) {
            if (nums[i] == val) { // ������Ҫ�Ƴ���Ԫ�أ��ͽ����鼯����ǰ�ƶ�һλ
                for (int j = i; j < size-1; j++) {
                    nums[j] = nums[j+1];
                }
                i--;
                size--; // ��ʱ����Ĵ�С-1
            }
        }
        return size;

    }
};