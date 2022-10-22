class Solution:
    def setZeroes(self, matrix: List[List[int]]) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """
        rows, columns = len(matrix), len(matrix[0])
        row, column = [False]*rows, [False]*columns
        for i in range(rows):
            for j in range(columns):
                if matrix[i][j] == 0:
                    row[i] = True
                    column[j] = True
        for i in range(rows):
            for j in range(columns):
                if row[i] or column[j]:
                    matrix[i][j] = 0

