class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> results(n, 1); 
        int postfix = 1;

        //prefix
        for(int i = 1; i < n; i++)
        {
            results[i] = results[i-1] * nums[i-1];
        }

        //postfix
        for(int i = n-1; i >= 0; i--)
        {
            results[i] *= postfix;
            postfix *= nums[i];
        }
        return results;
    }
};
