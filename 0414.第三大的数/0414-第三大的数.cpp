class Solution {
public:
    int thirdMax(vector<int>& nums) {
        //set默认从小到大排序
        set<int> s;
        //:号可以表示直接遍历整个数组
        //s.erase(it)删除地址为it的元素
        for(int num:nums){
            s.insert(num);
            if(s.size()>3){
                s.erase(s.begin());
            }
        }
        //s.begin()指向第一个数据，s.rbegin()指向最后一个数据
        return s.size()==3? *s.begin():*s.rbegin();
    }
};