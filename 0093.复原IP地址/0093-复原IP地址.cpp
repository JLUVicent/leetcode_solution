class Solution {
public:
    //�ݹ麯��
    // ����������
    vector<string> result;
    void backtracking(string& s,int startIndex,int pointsum){   //����const�أ����޸��� ���ſ�����
        // ȷ����ֹ����
        if ( pointsum == 3){
            if(isVaild(s,startIndex,s.size()-1)){
                // �������ж����һ���ָ��֮���Ԫ�أ���255.255.255.368 �ж�369
                result.push_back(s);
                return;
            }
        }

        // ��������߼�
        for( int i = startIndex; i < s.size(); i++){
            if(isVaild(s,startIndex,i)){
                // cout<<s[i]<<endl;
                // s.insert(s.begin()+i+1,'.');
                s.insert(s.begin() + i + 1 , '.'); 
                pointsum +=1;
            
            // �ݹ�
            backtracking( s, i+2,pointsum); //����Ӧ����i+2��Ϊ�Ѿ�������һ��.
            // ����
            s.erase(s.begin()+i+1);
            pointsum -= 1;
            }
            else{break;}
        }

    }

    // �ж��ַ����Ƿ�Ϸ�
    bool isVaild(const string& s,int start,int end){
        if( start > end){
            return false;   //�����������������䣬���Ϸ�
        }

        if( s[start] == '0' && start != end){
            //��һ������Ϊ0���Ϸ�
            return false;
        }

        int num = 0;
        for( int i = start; i<=end; i++){
            if(s[i] > '9' || s[i] < '0' ){
                //�Ƿ��ַ�
                return false;
            }
            num = num*10 + (s[i]-'0');  //�����ַ���ת��Ϊ���ֵ�д��������
            if( num > 255 ){    //����255���Ϸ�
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
