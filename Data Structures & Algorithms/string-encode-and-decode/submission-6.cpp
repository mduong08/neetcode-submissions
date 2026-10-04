class Solution {
public:

    string encode(vector<string>& strs) {
        string res = "";
        for(string& s : strs)
        {
            res += to_string(s.length()) + '#' + s;
        }
        return res;
    }

    vector<string> decode(string s) {
        int i = 0;
        int lens = s.length();
        vector<string> arr;
        while(i < s.size())
        {
            int j = i; while(s[j]!='#') j++;
            if(s[j] == '#')
            {
                int length = stoi(s.substr(i, j-i));
                arr.push_back(s.substr(j+1, length));
                i = j+length+1;
            }
        }
        return arr;
    } 
};
