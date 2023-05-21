class Solution {
public:
    unordered_map<int,int> a;
    int find( int x){
        return a.count(x)?a[x] = find(a[x]):x;
    }
    int longestConsecutive(vector<int>& nums) {
        for( auto i:nums){
            a[i] = i+1;
        }
        int res = 0;
        for( auto i:nums){
            int y = find(i+1);
            res = max(res,y-i);
        }
        return res;
    }
};