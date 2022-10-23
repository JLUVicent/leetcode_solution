class Solution:
    def detectCapitalUse(self, word: str) -> bool:
        # 若第一个字母为小写，判断第二个字母
        if len(word) >= 2 and word[0].islower() and word[1].isupper():
            return False
        # 无论第一个字母是否大写，其余字母必须与第2个字母大小写相同
        return all((word[i].islower() == word[1].islower()) for i in range(2, len(word)))