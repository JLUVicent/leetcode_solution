class Solution {
public:
    int thirdMax(vector<int>& nums) {
        //setĬ�ϴ�С��������
        set<int> s;
        //:�ſ��Ա�ʾֱ�ӱ�����������
        //s.erase(it)ɾ����ַΪit��Ԫ��
        for(int num:nums){
            s.insert(num);
            if(s.size()>3){
                s.erase(s.begin());
            }
        }
        //s.begin()ָ���һ�����ݣ�s.rbegin()ָ�����һ������
        return s.size()==3? *s.begin():*s.rbegin();
    }
};