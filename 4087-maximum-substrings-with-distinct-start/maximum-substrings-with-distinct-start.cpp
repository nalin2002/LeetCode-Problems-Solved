class Solution {
public:
    int maxDistinct(string s) {
        int n=s.size();
        unordered_map<char,int> mp;
        int count =0;
        for(const auto& x: s){
            if(!mp.contains(x)){
                mp[x]++;
                count++;
            }
        }
        return count;
    }
};