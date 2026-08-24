class Solution {
public:
bool iscan(vector<int>& nums,int mid,int threshold){
    int total=0;
    for(int i=0;i<nums.size();i++){
total+=ceil((double)nums[i]/(double)mid);

    }
    return total<=threshold;
}
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n=nums.size();
        int low=1;
        int high=*max_element(nums.begin(),nums.end());
        int ans;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(iscan(nums,mid,threshold)){
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