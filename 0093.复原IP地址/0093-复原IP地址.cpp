class Solution {
public:

    bool isVaild(const string& s, int start, int end){
        if( start > end){
            return false;
        }
        
        if( s[start] == '0' && start != end){
            return false;
        }

        int num = 0;
        for( int i = start; i <= end; i++){
            if( s[i] > '9' || s[i] < '0'){
                return false;
            }
            num = num*10 + (s[i] - '0');    //×Ö·û´®×ªÎªÊı×Ö
            if( num > 255){
                return false;
            }
        }
        return true;
    }

    vector<string> res;
    void backTracking(string& s, int startIndex, int pointSum){
        if(pointSum == 3){
            if( isVaild(s,startIndex,s.size() - 1)){
                res.push_back(s);
                return;
            }
        }

        // µ¥²ãÂß¼­
        for( int i = startIndex; i <s.size(); i++){
            if( isVaild(s,startIndex,i)){
                s.insert(s.begin()+i+1,'.');
                pointSum+=1;
                backTracking(s,i+2,pointSum);
                s.erase(s.begin()+i+1);
                pointSum -= 1;
            }
            else{
            break;
        }

        }
    }

    vector<string> restoreIpAddresses(string s) {
        backTracking(s,0,0);
        return res;

    }
};