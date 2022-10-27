

class Solution:
    desc = ("Gold Medal", "Silver Medal", "Bronze Medal")

    def findRelativeRanks(self, score: List[int]) -> List[str]:
        ans = [""]*len(score)
        arr = sorted(enumerate(score), key=lambda x: -x[1])
        for i, (idx, _) in enumerate(arr):
            ans[idx] = self.desc[i] if i < 3 else str(i+1)
        return ans
        # result = [0]*len(score)
        # sort_score = sorted(score, reverse=True)
        # hash_map = {}
        # for i, value in enumerate(sort_score):
        #     hash_map[value] = i+1
        # for j in range(len(score)):
        #     if hash_map[score[j]] == 1:
        #         result[j] = "Gold Medal"
        #     elif hash_map[score[j]] == 2:
        #         result[j] = "Silver Medal"
        #     elif hash_map[score[j]] == 3:
        #         result[j] = "Bronze Medal"
        #     else:
        #         result[j] = str(hash_map[score[j]])
        # return result

