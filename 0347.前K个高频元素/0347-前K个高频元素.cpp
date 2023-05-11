class Solution {
public:

    class mycomparison{ //小顶堆
    public:
        bool operator()( const pair<int,int>&lhs,const pair<int,int>&rhs){
            return lhs.second > rhs.second;
        }
    };

    vector<int> topKFrequent(vector<int>& nums, int k) {
        //统计元素出现的频率
        unordered_map<int,int>map;
        for( int i = 0; i < nums.size(); i++){
            map[nums[i]]++;
        }

        //定义小顶堆，大小为k 优先队列
        priority_queue<pair<int,int>,vector<pair<int,int>>,mycomparison> pri_que;

        for( unordered_map<int,int>::iterator it = map.begin(); it != map.end(); it++){
            pri_que.push(*it);
            if( pri_que.size() > k){
                pri_que.pop();
            }
        }
        vector<int> result(k);
        for( int i = k - 1; i >= 0; i--){
            result[i] = pri_que.top().first;
            pri_que.pop();
        }
        return result;
    }
};