class Solution {
public:

    string encode(vector<string>& strs) {
        string result = "";
        for(string v: strs){
            result += to_string(v.size());
            result += "#";
            result += v;
        }
        return result;
    }

    vector<string> decode(string s) {
        vector<string> result;
        int i = 0;
        while(i < s.size()){
            int j = i;
            while(s[j] != '#') j++;
            string piece = s.substr(i, j - i);
            int count = stoi(piece);
            string word = "";
            for(int k = j + 1; k < count + j + 1; k++){
                word += s[k];
            }
            result.push_back(word);
            i = count + j + 1;
        }
        return result;
    }
};
