class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        
        for i in range (len(nums) - 1, -1, -1):
            print(nums)
            if (nums[i-1] == val):
                nums.remove(val)
        print(nums)
        k = len(nums)
        return k