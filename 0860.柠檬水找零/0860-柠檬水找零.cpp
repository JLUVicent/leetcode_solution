class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int num5 = 0;
        int num10 = 0;
        for( int i = 0; i < bills.size(); i++){
            if( bills[i] == 5 ){
                num5 +=1;
            }
            else if( bills[i] == 10){
                num10 += 1;
                num5 -= 1;
            }
            else if( bills[i] == 20 ){
                // num10 -= 1;
                if(num10 > 0){
                    num10 -= 1;
                    num5 -= 1;
                }
                else{
                    num5 -= 3;
                }
            }
            if( num5 < 0 || num10 < 0){
                return false;
            }
        }
        return true;

    }
};