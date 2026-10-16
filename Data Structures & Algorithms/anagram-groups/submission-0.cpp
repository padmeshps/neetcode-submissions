class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

       map<array<int,26>, vector<string>> r;

        for(int i = 0; i < strs.size(); i++){
            array<int,26> key{} ;
            for(char ch : strs[i]){
                key[ch - 'a'] += 1 ;
            }
            r[key].push_back(strs[i]);
        }
        
        vector<vector<string>> result;
        for(auto& pair : r){
            result.push_back(pair.second);
        }
        return result ;
    }
};
