class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        rf = collections.Counter(ransomNote)
        af = collections.Counter(magazine)
        for key, value in rf.items():
            if key in af and value <= af[key]:
                continue
            else:
                return False
        return True