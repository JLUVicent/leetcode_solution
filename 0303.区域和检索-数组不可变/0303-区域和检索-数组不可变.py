class NumArray:

    def __init__(self, nums: List[int]):
        # ��ʼ����[0]���������д������
        self.sums = [0]
        _sums = self.sums
        # ע��ǰ׺�͵�д��
        for num in nums:
            _sums.append(_sums[-1]+num)

    def sumRange(self, left: int, right: int) -> int:
        _sums = self.sums
        return _sums[right+1]-_sums[left]


# Your NumArray object will be instantiated and called as such:
# obj = NumArray(nums)
# param_1 = obj.sumRange(left,right)