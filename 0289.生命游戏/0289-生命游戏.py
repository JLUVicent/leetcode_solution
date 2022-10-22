class Solution:
    def gameOfLife(self, board: List[List[int]]) -> None:
        """
        Do not return anything, modify board in-place instead.
        """
        neighbors = [(1, 0), (1, -1), (0, -1), (-1, -1),
                     (-1, 0), (-1, 1), (0, 1), (1, 1)]
        rows, columns = len(board), len(board[0])
        # 定义标志位
        for row in range(rows):
            for col in range(columns):
                live_neighbor = 0
                for neighbor in neighbors:
                    r, c = (row+neighbor[0]), (col+neighbor[1])
                    if (0 <= r < rows) and (0 <= c < columns) and abs(board[r][c]) == 1:
                        live_neighbor += 1
                # 规则1或规则3
                if board[row][col] == 1 and (live_neighbor < 2 or live_neighbor > 3):
                    # -1表示该细胞过去是活的现在没了
                    board[row][col] = -1
                # 规则4
                if board[row][col] == 0 and live_neighbor == 3:
                    # 2代表该细胞过去是死的现在是活的
                    board[row][col] = 2
        # 再次遍历数组
        for row in range(rows):
            for col in range(columns):
                if board[row][col] > 1:
                    board[row][col] = 1
                elif board[row][col] < 0:
                    board[row][col] = 0