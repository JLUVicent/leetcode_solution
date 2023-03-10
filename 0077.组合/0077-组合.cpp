class Solution {
public:

	vector<int> path;	//存储每个可能结果
	vector<vector<int>> result;	//存储最终结果
	void backtracking(int n, int k, int startIndex) {
		// 确定终止条件 path长度达到n就终止
		if (path.size() == k) {
			result.push_back(path);
			return;
		}

		// 确定单层递归逻辑
		for (int i = startIndex; i <= n; i++) {
			//添加元素
			path.push_back(i);		//压入元素
			backtracking(n, k, i + 1);	//递归
			path.pop_back();	//弹出元素 回溯
		}
		
	}



    vector<vector<int>> combine(int n, int k) {
        int i = 1 ; 
        backtracking( n,k,i);
        return result;
    }
};