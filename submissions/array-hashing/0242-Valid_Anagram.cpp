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
};