from itertools import zip_longest
from textwrap import fill


class Solution:
    def compareVersion(self, version1: str, version2: str) -> int:
        # v1, v2 = version1.split("."), version2.split(".")
        # if len(v1) > len(v2):
        #     for i in range(len(v1)-len(v2)):
        #         v2.append('0')
        # else:
        #     for i in range(len(v2)-len(v1)):
        #         v1.append('0')

        # for i in range(len(v1)):
        for v1, v2 in zip_longest(version1.split('.'), version2.split('.'), fillvalue=0):
            x, y = int(v1), int(v2)
            if x != y:
                return 1 if x > y else -1
        return 0