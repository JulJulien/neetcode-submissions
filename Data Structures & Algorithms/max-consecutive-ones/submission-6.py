class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        counter = 0
        maxcounter = 0

        for i in nums:
            if(i == 1):
                counter = counter + 1
                if(counter > maxcounter):
                    maxcounter = counter
            else:
                counter = 0

            print(i)

        return maxcounter
        