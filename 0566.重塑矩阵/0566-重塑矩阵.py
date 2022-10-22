class Solution:
    def matrixReshape(self, mat: List[List[int]], r: int, c: int) -> List[List[int]]:
        rows, cloumns = len(mat), len(mat[0])
        total = rows*cloumns
        all_num = [0]*total
        row, cloumn = 0, 0
        new_mat = [[0]*c for _ in range(r)]
        # ≈–∂œ «∑Òø…÷ÿÀ‹
        if (r*c) != total:
            return mat
        else:
            for i in range(total):
                all_num[i] = mat[row][cloumn]
                cloumn += 1
                if cloumn == cloumns:
                    row += 1
                    cloumn = 0
            row, cloumn = 0, 0
            for j in range(total):
                new_mat[row][cloumn] = all_num[j]
                cloumn += 1
                if cloumn == c:
                    cloumn = 0
                    row += 1
        return new_mat

