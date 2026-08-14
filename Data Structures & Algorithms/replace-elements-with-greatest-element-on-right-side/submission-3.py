class Solution:
    def replaceElements(self, arr: List[int]) -> List[int]:
        max_so_far = 0
        for i in range(len(arr)-1, -1, -1):
            current_val = arr[i]
            arr[i] = max_so_far
            max_so_far = max(max_so_far, current_val)
        arr[len(arr)-1] = -1
        return arr       
