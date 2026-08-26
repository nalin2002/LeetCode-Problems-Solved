class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string,string> keys;
        for(auto& x: knowledge){
            keys[x[0]]=x[1];
        }
        string ans;
        ans.reserve(s.size());
        int i=0;
        while(i<s.size()){
            if(s[i]=='('){
                i++;
                while(s[i]!=')'){
                    s[i]= toupper(s[i]);
                    i++;
                }
            }
            i++;
        }
        i=0;
        while(i<s.size()){
            if(s[i]!='(' && s[i]!=')' && islower(s[i]) ){
                ans.push_back(s[i]);
                i++;
            }
            else if(s[i]=='('){
                string key;
                i++;
                while(s[i]!=')'){
                    key.push_back(tolower(s[i]));
                    i++;
                }
                if(keys.find(key)!=keys.end()){
                    ans.append(keys[key]);
                }
                else{
                    ans.push_back('?');
                }
                i++;
            }
        }
        return ans;
    }
};