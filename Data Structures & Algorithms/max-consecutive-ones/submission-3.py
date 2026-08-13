class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        max_con = 0
        counter = 0
        for i in range(len(nums)): 
            if (nums[i] == 1):
                counter += 1
                if (max_con < counter):
                    max_con = counter
            else: counter = 0
        return max_con

