class Solution {
public:
    //递归函数
    // 定义结果数组
    vector<string> result;
    void backtracking(string& s,int startIndex,int pointsum){   //还加const呢，被修改了 隔着卡半天
        // 确定终止条件
        if ( pointsum == 3){
            if(isVaild(s,startIndex,s.size()-1)){
                // 这里是判断最后一个分割点之后的元素，如255.255.255.368 判断369
                result.push_back(s);
                return;
            }
        }

        // 单层遍历逻辑
        for( int i = startIndex; i < s.size(); i++){
            if(isVaild(s,startIndex,i)){
                // cout<<s[i]<<endl;
                // s.insert(s.begin()+i+1,'.');
                s.insert(s.begin() + i + 1 , '.'); 
                pointsum +=1;
            
            // 递归
            backtracking( s, i+2,pointsum); //这里应该用i+2因为已经插入了一个.
            // 回溯
            s.erase(s.begin()+i+1);
            pointsum -= 1;
            }
            else{break;}
        }

    }

    // 判断字符串是否合法
    bool isVaild(const string& s,int start,int end){
        if( start > end){
            return false;   //如果左区间大于右区间，不合法
        }

        if( s[start] == '0' && start != end){
            //第一个数字为0不合法
            return false;
        }

        int num = 0;
        for( int i = start; i<=end; i++){
            if(s[i] > '9' || s[i] < '0' ){
                //非法字符
                return false;
            }
            num = num*10 + (s[i]-'0');  //这里字符串转换为数字的写法！！！
            if( num > 255 ){    //大于255不合法
                return false;
            }
        }
        return true;
    }

    vector<string> restoreIpAddresses(string s) {
        backtracking( s, 0,0);
        return result;

    }
};
