#include <numeric>
typedef long long ll;
using namespace std;
class Solution {
public:
    long long max(ll a,ll b){
        return a>b? a:b;
    }
    ll gcd(ll a,ll b){
        while(b!=0){
            ll temp=b;
            b= a%b;
            a=temp;
        }
        return a;
    }
    long long gcdSum(vector<int>& nums) {
        int n= nums.size();
        long long ans=0;

        vector<long long> max_array(n,0),prefixGcd(n,0);
        max_array[0]=nums[0];
        prefixGcd[0]=nums[0];
       
        for(long long i=1;i<n;i++){
            max_array[i]= max(max_array[i-1],nums[i]);
            prefixGcd[i]= gcd(nums[i],max_array[i]);
        }
   
        sort(prefixGcd.begin(),prefixGcd.end());
        long long i=0,j=n-1;
        while(i<j){
            ans += gcd(prefixGcd[i],prefixGcd[j]);
            i++;
            j--;
        }

        return ans;
    }
};