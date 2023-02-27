class Solution {
public:
    // ����С����
    class mycomparison{
    public:
        bool operator()( const pair<int,int>& lhs,const pair<int,int>& rhs){
            return lhs.second > rhs.second;
    }
    };
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // ʱ�临�Ӷ� O(nlogk)
        // �ռ临�Ӷ� O(n)

        // ͳ��Ԫ�س��ֵĸ���
        unordered_map<int,int> map; //ͳ��Ԫ�ض�Ӧ���ֵĴ���
        for( int i = 0 ; i < nums.size(); i++){
            map[nums[i]]++;
        }


        // ��Ƶ������
        // ����С���ѣ���СΪk

        priority_queue<pair<int,int>,vector<pair<int,int>>,mycomparison> pri_que;

        // �ù̶���СΪk��С���ѣ�ɨ��������ֵ
        for (unordered_map<int, int>::iterator it = map.begin(); it != map.end(); it++) {
            pri_que.push(*it);
            if (pri_que.size() > k) { // ����ѵĴ�С������K������е�������֤�ѵĴ�СһֱΪk
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