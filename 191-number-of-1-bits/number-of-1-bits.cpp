class Solution {
public:
    int hammingWeight(int n) {
        if(n==1) return 1;
        int count = 0;
        bitset<32> binary(n);
        
        return binary.count();
    }
};