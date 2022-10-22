class Solution:
    def gameOfLife(self, board: List[List[int]]) -> None:
        """
        Do not return anything, modify board in-place instead.
        """
        neighbors = [(1, 0), (1, -1), (0, -1), (-1, -1),
                     (-1, 0), (-1, 1), (0, 1), (1, 1)]
        rows, columns = len(board), len(board[0])
        # �����־λ
        for row in range(rows):
            for col in range(columns):
                live_neighbor = 0
                for neighbor in neighbors:
                    r, c = (row+neighbor[0]), (col+neighbor[1])
                    if (0 <= r < rows) and (0 <= c < columns) and abs(board[r][c]) == 1:
                        live_neighbor += 1
                # ����1�����3
                if board[row][col] == 1 and (live_neighbor < 2 or live_neighbor > 3):
                    # -1��ʾ��ϸ����ȥ�ǻ������û��
                    board[row][col] = -1
                # ����4
                if board[row][col] == 0 and live_neighbor == 3:
                    # 2�����ϸ����ȥ�����������ǻ��
                    board[row][col] = 2
        # �ٴα�������
        for row in range(rows):
            for col in range(columns):
                if board[row][col] > 1:
                    board[row][col] = 1
                elif board[row][col] < 0:
                    board[row][col] = 0