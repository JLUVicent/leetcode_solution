class Solution {
public:
    // 定义小顶堆
    class mycomparison{
    public:
        bool operator()( const pair<int,int>& lhs,const pair<int,int>& rhs){
            return lhs.second > rhs.second;
    }
    };
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // 时间复杂度 O(nlogk)
        // 空间复杂度 O(n)

        // 统计元素出现的概率
        unordered_map<int,int> map; //统计元素对应出现的次数
        for( int i = 0 ; i < nums.size(); i++){
            map[nums[i]]++;
        }


        // 对频率排序
        // 定义小顶堆，大小为k

        priority_queue<pair<int,int>,vector<pair<int,int>>,mycomparison> pri_que;

        // 用固定大小为k的小顶堆，扫描所有数值
        for (unordered_map<int, int>::iterator it = map.begin(); it != map.end(); it++) {
            pri_que.push(*it);
            if (pri_que.size() > k) { // 如果堆的大小大于了K，则队列弹出，保证堆的大小一直为k
                pri_que.pop();
            }
            }

        vector<int> resutl(k);
        for( int i = k - 1; i >= 0;i--){
            resutl[i] = pri_que.top().first;
            pri_que.pop();
        }
        return resutl;


    }
};