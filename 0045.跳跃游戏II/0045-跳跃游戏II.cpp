class Solution {
public:
    int jump(vector<int>& nums) {

        int cur = 0;
        int next = 0;
        int result = 0;
        for( int i = 0; i < nums.size(); i++){
            next = max( i+nums[i],next);    //获得最大覆盖范围
            if( i == cur ){
                if( cur < nums.size()-1){
                    result++;
                    cur = next;
                
                if( next >= nums.size()-1) break;}
                else break;
            }
        }
        return result;
    }
};