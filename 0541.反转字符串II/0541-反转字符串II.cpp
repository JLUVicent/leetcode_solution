class Solution {
public:
    void reverse(string& s,int left,int right){
        if(left == right) return;
        while(left < right){
            s[left] = s[left]^s[right];
            s[right] = s[left]^s[right];
            s[left] = s[left]^s[right];
            left++;
            right--;
        }
    }

    string reverseStr(string s, int k) {
        for( int i = 0; i < s.size(); i += 2*k){
            if( i + k <= s.size()){
                reverse(s,i,i+k-1);
            }else{
                reverse(s,i,s.size()-1);
            }
        }
        return s;

    }
};