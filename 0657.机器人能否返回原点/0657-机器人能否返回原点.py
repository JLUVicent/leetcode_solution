class Solution:
    def judgeCircle(self, moves: str) -> bool:
        fre = Counter(moves)
        return (fre['U'] == fre['D'] and fre['R'] == fre['L'])