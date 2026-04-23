class Solution {
public:

    string encode(vector<string>& strs) {
    string res = "";
    for(string s : strs){
        res+=to_string(s.length());
        res+="#";
        res+=s;
    }
    return res;
    }

    vector<string> decode(string s) {
    vector<string> ans;
    int i = 0;
    while(i<s.length()){
        int j = i;
        while(s[j]!='#'){
            j++;
        }
        int len = stoi(s.substr(i,j-i));
        ans.push_back(s.substr(j+1,len));
        i = j + 1 + len;
    }
    return ans;
    }
};
