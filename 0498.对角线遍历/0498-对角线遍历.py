

class Solution:
    def findDiagonalOrder(self, mat: List[List[int]]) -> List[int]:
        ans = []
        m, n = len(mat), len(mat[0])
        for i in range(m+n-1):
            if i % 2:
                x = 0 if i < n else i-n+1
                y = i if i < n else n-1
                while x < m and y >= 0:
                    ans.append(mat[x][y])
                    # 右上到左下
                    x += 1
                    y -= 1
            else:
                x = i if i < m else m-1
                y = 0 if i < m else i-m+1
                while x >= 0 and y < n:
                    ans.append(mat[x][y])
                    # 左下到右上
                    x -= 1
                    y += 1
        return ans

