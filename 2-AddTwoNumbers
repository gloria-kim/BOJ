class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<char> save;
        save.push_back(s.at(0));
        for (int i = 0; i < s.size()-1; i++){
            for (int j = 0; j < s.size()-1; j++)
                if (s.at(i) != s.at(j))
                {
                    save.push_back(s.at(j));
                }
        }
        int n = save.size();
        return n;
    }
};
