class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        int result = 1;     //初始记录最后一个元素坡度
        int prediff = 0;    //相当于首位元素有坡度
        int curdiff = 0;    
        for( int i = 0; i < nums.size() - 1; i++){  //这里不包括最后一个元素，因为result已经记录了其坡度
            curdiff = nums[i+1] - nums[i];  //给curdiff赋值，prediff的赋值后面更新
            if( (prediff >= 0 && curdiff < 0) || (prediff <= 0 && curdiff >0)){ // 统一更新规则
                result++;
                prediff = curdiff;
            }
            
        }
        return result;


    }
};