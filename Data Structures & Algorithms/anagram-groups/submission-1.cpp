class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string, vector<string>> map;
        for(auto& s : strs){
            string t = s;
            sort(t.begin(), t.end());
            map[t].push_back(s);
        }

        vector<vector<string>> r;
        for(auto& k : map){
            r.push_back(k.second);
        }
        return r;
    }
};
