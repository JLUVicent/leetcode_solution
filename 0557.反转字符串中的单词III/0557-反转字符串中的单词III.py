class Solution:
    def reverseWords(self, s: str) -> str:
        s = s.split(' ')
        s_list = []
        for i in s:
            if i != '':
                i = list(i)
                i.reverse()
                s_list.append(''.join(i))
        return ' '.join(s_list)