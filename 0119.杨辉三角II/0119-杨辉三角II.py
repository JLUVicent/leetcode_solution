class Solution:
    def getRow(self, rowIndex: int) -> List[int]:
        tra=[]
        for num_row in range(rowIndex+1):
            row=[None for _ in range(num_row+1)]
            row[0],row[-1]=1,1

            for j in range(1,len(row)-1):
                row[j]=tra[num_row-1][j-1]+tra[num_row-1][j]
            tra.append(row)
        return tra[-1]