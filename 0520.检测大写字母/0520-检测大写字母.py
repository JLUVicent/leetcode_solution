class Solution:
    def detectCapitalUse(self, word: str) -> bool:
        # ����һ����ĸΪСд���жϵڶ�����ĸ
        if len(word) >= 2 and word[0].islower() and word[1].isupper():
            return False
        # ���۵�һ����ĸ�Ƿ��д��������ĸ�������2����ĸ��Сд��ͬ
        return all((word[i].islower() == word[1].islower()) for i in range(2, len(word)))