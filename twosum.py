class Solution(object):
    def twoSum(self, nums, target):
        for i in range(len(nums)):
            for j in range(len(nums)-1):
                if nums[i]+nums[j] == target:
                    return i
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
    nums = [2,7,11,15] 
    target = 9
    print(twoSum(nums, target))
