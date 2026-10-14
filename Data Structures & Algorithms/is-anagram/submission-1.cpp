#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if(s.size()!=t.size()) return false;
        
        unordered_map<char,int> counts;
        unordered_map<char,int> countt;

        for (char c : s){
            counts[c]++;
        }
        for (char c : t){
            countt[c]++;
        }
        for(char c : s){
            if (counts[c]!=countt[c])return false;
        }
        return true;
    }
};
