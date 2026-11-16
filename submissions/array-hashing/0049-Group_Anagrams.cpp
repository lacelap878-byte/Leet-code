class Solution {
public:
    bool isAnagram(string s, string t) {
        int Slist[26]{};
        int Tlist[26]{};
        for(char v: s){
            Slist[v - 'a']++;
        }
        for(char v: t){
            Tlist[v - 'a']++;
        }
        for(int v = 0; v < 26; v++ ){
            if(Slist[v] != Tlist[v]){
                return false;
            }
        }
        return true;
    }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        vector<bool> placed(strs.size(), false);
        for(int i = 0; i < strs.size(); i++){
            if(placed[i]) continue;
            vector<string> holding;
            holding.push_back(strs[i]);
            for(int j = i + 1; j < strs.size(); j++){
                if(isAnagram(strs[i], strs[j])){
                    holding.push_back(strs[j]);
                    placed[j] = true;
                }
            }
            result.push_back(holding);
        }
        return result;
    }
};