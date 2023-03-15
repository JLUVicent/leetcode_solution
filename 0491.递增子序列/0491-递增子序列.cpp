class Solution {
public:

    // �ж��Ƿ�Ϊ��������
    // bool isIncrease(vector<int>& path){
    //     if( path.size() <= 1) return false;
    //     for( int i = 1; i < path.size(); i++){
    //         if( path[i] < path[i-1]){
    //             return false;
    //         }
    //     }
    //     return true;
    // }

    //ȫ�ֱ���
    vector<int> path;
    vector<vector<int>> result;
    // // ����ֵ�Ͳ���
    // void backtracking(vector<int>& nums,int startIndex){

    //     if(isIncrease(path)) result.push_back(path);
    //     unordered_set<int> uset;        //����ÿһ��ݹ鶼�����½��м�¼ ע�������������ÿ��ݹ�֮ǰ
    //     for( int i = startIndex; i < nums.size(); i++){
    //         // �ռ����
    //         // ���弯��
            
    //         // if( i > 0 && nums[i] == nums[i-1] && !used[i-1]) continue;
    //         if( uset.find(nums[i]) != uset.end()) continue;
    //         uset.insert(nums[i]);
    //         path.push_back(nums[i]);
    //         backtracking( nums, i+1);   //�ݹ�
    //         path.pop_back();    //����
    //     }  
    // }

    void backtracking( vector<int>& nums, int startIndex){
        if ( path.size() > 1){
            result.push_back(path);
        }
        unordered_set<int> uset;
        for( int i = startIndex; i < nums.size(); i++){
            // ȥ��
            if(( !path.empty() && nums[i] < path.back()) || uset.find(nums[i]) != uset.end()){ continue; }

            uset.insert(nums[i]);   //����ù���Ԫ��
            path.push_back(nums[i]);
            backtracking( nums, i+1);
            path.pop_back();
        }
    }

    vector<vector<int>> findSubsequences(vector<int>& nums) {
        backtracking( nums,0);
        return result;

    }
};