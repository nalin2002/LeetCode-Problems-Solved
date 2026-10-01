class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int n= stones.size();
        if(n==1) return stones[0];
        priority_queue<int> pq(stones.begin(),stones.end());

        int top1,top2;
        while(!pq.empty() && pq.size()>1){
            top1= pq.top();
            pq.pop();

            if(!pq.empty()){
            top2= pq.top();
            pq.pop();

            if(top1!=top2){
                pq.push(top1-top2);
            }

            }

        }
        return pq.empty()?0:pq.top();
    }
};