class Solution {
public:

    // 定义cmp函数需要加上static
    static bool cmp( const vector<int>& a, const vector<int>& b){
        if( a[0] == b[0]) return a[1] < b[1];
        return a[0] > b[0];
    }

    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        sort( people.begin(),people.end(),cmp);
        // vector<vector<int>> que;
        list<vector<int>> que;
        for( int i = 0; i < people.size(); i++){
            int position = people[i][1];
            // que.insert( que.begin() + position,people[i]);
            std::list<vector<int>>::iterator it = que.begin();
            while( position--){
                it++;   //寻找插入位置
            }
            que.insert(it,people[i]);
        }
        return vector<vector<int>>(que.begin(),que.end());
        
    }
};