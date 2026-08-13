class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        cons_max = 0
        cons_cur = 0
        for number in range(len(nums)):
            # add one to new stack
            if (nums[number] == 1):
                cons_cur += 1
                # compare old stack to new stack
                if (cons_cur > cons_max):
                    cons_max = cons_cur
            # reset current stack on 0
            if (nums[number] == 0):
                cons_cur = 0
            print(nums[number], cons_cur)
        return cons_max

