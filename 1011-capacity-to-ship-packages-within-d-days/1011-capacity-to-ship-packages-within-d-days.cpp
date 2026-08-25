class Solution {
public:
int require_days(vector<int>& weights, int mid){
    int time=1,load=0;
    for(int j=0;j<weights.size();j++){
        if(weights[j]+load>mid){
            time++;
            load=weights[j];
        }
        else{
            load+=weights[j];
        }
    }
    return time;
}
    int shipWithinDays(vector<int>& weights, int days) {
        int low =INT_MIN;
        int high=0;
        int ans=high;
        for(int i:weights){
            low=max(low,i);
            high+=i;
        }
        while(low<=high){
            int mid=low+(high-low)/2;
            int req_days = require_days(weights, mid);
            
             if(req_days<=days){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};