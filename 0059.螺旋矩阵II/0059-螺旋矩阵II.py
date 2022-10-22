class Solution:
    def generateMatrix(self, n: int) -> List[List[int]]:
        num = pow(n, 2)
        order = [0]*num
        for i in range(num):
            order[i] = i+1
        rows, columns = n, n
        row, column = 0, 0
        output_matrix = [[0]*n for _ in range(n)]
        visited = [[False]*n for _ in range(n)]
        directions = [[0, 1], [1, 0], [0, -1], [-1, 0]]
        directionIndex = 0
        for j in range(num):
            output_matrix[row][column] = order[j]
            visited[row][column] = True
            nextRow, nextColumn = row + \
                directions[directionIndex][0], column + \
                directions[directionIndex][1]
            if not(0 <= nextRow < rows and 0 <= nextColumn < columns and not visited[nextRow][nextColumn]):
                directionIndex = (directionIndex+1) % 4
            row += directions[directionIndex][0]
            column += directions[directionIndex][1]
        return output_matrix

