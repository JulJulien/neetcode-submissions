class Solution {
public:

    string encode(vector<string>& strs) {
        string result = "";

        for(auto& i : strs)
        {
            string size = to_string(i.size());
            result += ";" + size + ";" + i ;
        }
        return result;
    }

    vector<string> decode(string s) {
        vector<string> result;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == ';')
            {
                string sizeS = "";
                i++;
                while(isdigit(s[i]) && s[i] != ';')
                {
                    sizeS += s[i];
                    i++;
                }
                int size = stoi(sizeS);
                string decode = "";
                for(int j = 0; j < size; j++)
                {
                    i++;
                    decode += s[i];
                }
                result.push_back(decode);
            }
            else
                continue;
        }
        return result;
    }
};
