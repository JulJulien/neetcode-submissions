class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        unordered_map<string, vector<string>> hash;
        for(int i = 0; i < strs.size(); i++)
        {
            string value = strs[i];
            sort(strs[i].begin(), strs[i].end());
            hash[strs[i]].push_back(value);
        }
        for(auto& i: hash)
        {
            result.push_back(i.second);
        }
        return result;
    }
};
