class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        // // �����ϣ��д��
        // int hash_map[1001]={0};
        // unordered_set<int> result;
        // for ( int i = 0;i < nums1.size();i++){
        //     hash_map[ nums1[i] ]++;
        // }
        // for ( int i = 0;i < nums2.size();i++){
        //     if( hash_map[ nums2[i] ] != 0 ){
        //         result.insert(nums2[i]);
        //     }
        // }
        // return vector<int>(result.begin(),result.end());

        // 2.set��ϣ��Ľⷨ
        unordered_set<int> result_set;  //��Ž������set��ȥ��
        unordered_set<int> nums_set(nums1.begin(),nums1.end());
        for(int num:nums2){
            //�鿴nums2��Ԫ���Ƿ���nums_set������ֹ�
            if( nums_set.find(num) != nums_set.end()){
                result_set.insert(num);
            }
        }
        return vector<int>(result_set.begin(),result_set.end());



    }
};