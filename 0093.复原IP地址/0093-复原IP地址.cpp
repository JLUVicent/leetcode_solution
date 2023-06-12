class Solution {
public:

    bool isVaild(const string& s,int start, int end){
        if( start > end){
            return false;
        }
        if( s[start] == '0' && start != end){
            // ��һ������Ϊ0���Ϸ�
            return false;
        }
        int num = 0;
        for( int i = start; i <= end; i++){
            if( s[i] > '9' || s[i] < '0'){
                return false;
            }
            num = num*10 + (s[i] - '0');
            if( num > 255){
                return false;
            }
        }
        return true;
    }

    // �ݹ麯��
    vector<string> res;
    void backTracking(string &s, int startIndex, int pointSum){
        // ȷ����ֹ����
        if(pointSum == 3){
            if(isVaild(s,startIndex,s.size()-1)){
                res.push_back(s);
                return;
            }
        }
        for( int i = startIndex; i < s.size(); i++){
            if( isVaild(s,startIndex,i)){
                s.insert(s.begin()+i+1,'.');
                pointSum+=1;
                //�ݹ�
                backTracking(s,i+2,pointSum);
                s.erase(s.begin()+i+1);
                pointSum -=1;
            }else{
                break;
            }
        }
    }

    vector<string> restoreIpAddresses(string s) {
        backTracking(s,0,0);
        return res;

    }
};