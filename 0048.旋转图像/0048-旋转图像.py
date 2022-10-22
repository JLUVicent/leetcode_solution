class Solution:
    def rotate(self, matrix: List[List[int]]) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """
        # 空间复杂度不满足要求
        # n = len(matrix)
        # matrix_new = [[0]*n for _ in range(n)]
        # for row in range(n):
        #     for column in range(n):
        #         matrix_new[column][n-row-1] = matrix[row][column]
        # matrix[:] = matrix_new

        n = len(matrix)
        for i in range(n//2):
            for j in range((n+1)//2):
                matrix[i][j], matrix[n-j-1][i], matrix[n-i-1][n-j-1], matrix[j][n-i -
                                                                                1] = matrix[n-j-1][i], matrix[n-i-1][n-j-1], matrix[j][n-i-1], matrix[i][j]