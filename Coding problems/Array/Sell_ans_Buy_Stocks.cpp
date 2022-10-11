class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mincost = INT_MAX;
        int maxprofit = INT_MIN;
        
        for(auto x:prices)
        {
            mincost = min(mincost,x);
            cout<<mincost<<" ";
            maxprofit = max(maxprofit,x-mincost);   //profit = selling price - costing price
            cout<<maxprofit<<endl;
        }
        return maxprofit;
    }
};