class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> countS;
        unordered_map<char, int> countT;

        for(auto& i: s)
        {
            if(countS.find(i) == countS.end())
            {
                countS.insert({i, 1});
            }
            else
            {
                countS[i]++;
            }
        }
        for(auto& i: t)
        {
            if(countT.find(i) == countT.end())
            {
                countT.insert({i, 1});
            }
            else
            {
                countT[i]++;
            }   
        }
        return (countS==countT);
    }
};
