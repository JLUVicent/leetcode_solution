class Solution {
public:

	vector<int> path;	//�洢ÿ�����ܽ��
	vector<vector<int>> result;	//�洢���ս��
	void backtracking(int n, int k, int startIndex) {
		// ȷ����ֹ���� path���ȴﵽn����ֹ
		if (path.size() == k) {
			result.push_back(path);
			return;
		}

		// ȷ������ݹ��߼�
		for (int i = startIndex; i <= n; i++) {
			//���Ԫ��
			path.push_back(i);		//ѹ��Ԫ��
			backtracking(n, k, i + 1);	//�ݹ�
			path.pop_back();	//����Ԫ�� ����
		}
		
	}



    vector<vector<int>> combine(int n, int k) {
        int i = 1 ; 
        backtracking( n,k,i);
        return result;
    }
};