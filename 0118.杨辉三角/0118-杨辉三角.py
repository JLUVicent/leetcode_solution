class Solution:

    def generate(self, numRows: int) -> List[List[int]]:
        tra=[]#∂®“Â∑µªÿæÿ’Û
        for row_num in range(numRows):
            row=[None for _ in range(row_num+1)]
            row[0]=1
            row[-1]=1
            for j in range(1,len(row)-1):
                row[j]=tra[row_num-1][j-1]+tra[row_num-1][j]
            tra.append(row)
        return tra