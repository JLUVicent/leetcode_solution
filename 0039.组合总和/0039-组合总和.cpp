class Solution {
public:

    // ȫ�ֱ�����Ž��
    vector<int> path;
    vector<vector<int>> result;

    // ȷ������ֵ�Ͳ���
    void backtracking(vector<int>& candidates,int target,int sum, int startIndex){
        // ȷ����ֹ����
        if( sum > target) return;
        if( sum == target ){
            result.push_back(path);
            return ;
        }

        // ȷ������ݹ��߼�
        for( int i = startIndex; i < candidates.size() && sum+candidates[i]<=target; i++){
            // ������
            path.push_back(candidates[i]);
            sum += candidates[i];
            // �ݹ�
            backtracking(candidates,target,sum, i);
            //����
            path.pop_back();
            sum -= candidates[i];
        }
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int sum = 0;
        int startIndex = 0;
        sort(candidates.begin(),candidates.end());  //��֦��Ҫ����
        backtracking(candidates,target,sum,startIndex);
        return result;
        
    }
};