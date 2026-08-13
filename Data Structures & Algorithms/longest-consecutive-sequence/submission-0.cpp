class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> sequence(nums.begin(), nums.end());
        int longest = 0;
        for(auto& i : sequence)
        {
            int length = 0;
            if(sequence.find(i-1) == sequence.end())
            {
                while(sequence.find(i+length) != sequence.end())
                {
                    length++;
                }
            }
            longest = max(length, longest);
        }
        return longest;
    }
};
