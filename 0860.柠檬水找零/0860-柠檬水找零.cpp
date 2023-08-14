class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        // 初始手上没有零钱
        int num5 = 0;
        int num10 = 0;
        int num20 = 0;
        for( int i = 0; i < bills.size(); i++){
            if( bills[i] == 5){
                num5++;
            }else if(bills[i] == 10){
                num10++;
                num5--;
            }else{
                if( num10 > 0){
                    num10--;
                    num5--;
                }else{
                    num5 -= 3;
                }
                num20++;
            }
            if( num5 < 0 || num10 < 0){ return false;}
        }
        return true;

    }
};