class Solution:
    def frequencySort(self, s: str) -> str:
        s_map = {}
        for i in s:
            if i in s_map.keys():
                s_map[i] += 1
            else:
                s_map[i] = 1
        s_map = dict(sorted(s_map.items(), key=lambda x: x[1], reverse=True))
        re_list = []
        for key, value in s_map.items():
            for i in range(value):
                re_list.append(key)
        return ''.join(re_list)
