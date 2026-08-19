class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        max_con = 0
        cur = 0

        for i in range(len(nums)):
            if(nums[i] == 1):
                cur += 1
            else: cur = 0
            
            if(max_con < cur):
                max_con = cur
        
        return max_con
