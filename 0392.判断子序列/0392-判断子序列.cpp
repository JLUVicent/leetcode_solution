class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n=s.length(),m=t.length();
        int i=0,j=0;
        while (i<n && j<m){
            if (s[i]==t[j]){
                i+=1;
            }
            j+=1;
        }
        return (i==n);


    }
};