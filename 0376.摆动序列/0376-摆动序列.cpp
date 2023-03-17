class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        int result = 1;     //��ʼ��¼���һ��Ԫ���¶�
        int prediff = 0;    //�൱����λԪ�����¶�
        int curdiff = 0;    
        for( int i = 0; i < nums.size() - 1; i++){  //���ﲻ�������һ��Ԫ�أ���Ϊresult�Ѿ���¼�����¶�
            curdiff = nums[i+1] - nums[i];  //��curdiff��ֵ��prediff�ĸ�ֵ�������
            if( (prediff >= 0 && curdiff < 0) || (prediff <= 0 && curdiff >0)){ // ͳһ���¹���
                result++;
                prediff = curdiff;
            }
            
        }
        return result;


    }
};