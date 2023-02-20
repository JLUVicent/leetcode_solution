class Solution {
public:
    // 取各个位上的单数的平方和
    int getSum( int n){
        int sum = 0;
        while (n) {
            sum +=(n % 10) * ( n % 10);//先取个位，再取十位依次进行
            n /=10;
        }
        return sum;
    }
    bool isHappy(int n) {
        unordered_set<int> set;
        while(1){
            int sum = getSum(n);
            if (sum == 1){
                return true;
            }
            // 如果重复出现过，直接return false 说明陷入了循环
            if(set.find(sum)!=set.end()){
                return false;
            }
            else{
                set.insert(sum);
            }
            n=sum;
        }

    }
};