class Solution {
public:

    // �洢���
    vector<int> path;   //�洢·��
    vector<vector<int>> result;     //�洢���ս��
    
    // ȷ������ֵ�Ͳ���
    void backtracking( vector<int>& nums,int target, int sum, int startIndex,vector<bool>& used){
        // ȷ����ֹ����
        if( sum > target ) return ;
        if( sum == target ){
            result.push_back(path);
            return;
        }

        // ȷ�������߼�
        for( int i = startIndex; i < nums.size() && sum+nums[i] <=target; i++){
            // ȥ�ز���
            if( i > 0 && nums[i] == nums[i-1] && !used[i-1]) continue;  //ǰһ��Ԫ��û�б��ù�
            path.push_back(nums[i]);    //���Ԫ��
            sum += nums[i];
            used[i] = true;
            backtracking( nums,target,sum,i+1,used);
            sum -= nums[i];
            used[i] = false;
            path.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<bool> used(candidates.size(),false);
        backtracking( candidates,target,0,0,used);
        return result;

    }
};