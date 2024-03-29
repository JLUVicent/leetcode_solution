

class Solution:
    def spiralOrder(self, matrix: List[List[int]]) -> List[int]:
        if not matrix or not matrix[0]:
            return list()
        rows, columns = len(matrix), len(matrix[0])
        total = rows*columns
        order = [0]*total
        # ���帨������
        visited = [[False]*columns for _ in range(rows)]
        row, column = 0, 0
        directions = [[0, 1], [1, 0], [0, -1], [-1, 0]]
        directionIndex = 0
        for i in range(total):
            order[i] = matrix[row][column]
            visited[row][column] = True
            nextRow, nextColumn = row + \
                directions[directionIndex][0], column + \
                directions[directionIndex][1]
            if not(0 <= nextRow < rows and 0 <= nextColumn < columns and not visited[nextRow][nextColumn]):
                directionIndex = (directionIndex+1) % 4
            row += directions[directionIndex][0]
            column += directions[directionIndex][1]
        return order