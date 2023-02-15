class Solution {
public:
    int search(vector<int>& nums, int target) {
        // int left = 0;
        // int right = nums.size() - 1;
        // // 左闭右闭的写法 左闭右开在下面right赋值不需要减一
        // while ( left <= right ){
        //     // c++定义基础不牢固，定义变量要加上变量类型
        //     int middle = left + ( right - left ) / 2; //防止溢出
        //     if ( nums[middle] > target ){
        //         right = middle -1;
        //     }
        //     else if ( nums[middle] < target ){
        //         left = middle + 1;
        //     }
        //     else{
        //         return middle;
        //     }
        // }
        // return -1;
        
        // 左闭右开写法
        int left = 0;
        int right = nums.size();
        // 左闭右闭的写法 左闭右开在下面right赋值不需要减一
        while ( left < right ){
            // c++定义基础不牢固，定义变量要加上变量类型
            int middle = left + ( right - left ) / 2; //防止溢出
            if ( nums[middle] > target ){
                right = middle;
            }
            else if ( nums[middle] < target ){
                left = middle + 1;
            }
            else{
                return middle;
            }
        }
        return -1;

    }
};