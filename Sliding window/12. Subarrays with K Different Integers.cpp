class Solution {
public:
    int solve(vector<int>& nums , int k){
        if(k==0)return 0;
        int n=nums.size();
        int total=0,diff=0,j=0;
        vector<int>count(20001);
        for(int i=0;i<n;i++){
            if(count[nums[i]]==0){
                diff++;
                count[nums[i]]++;
            }
            else{
                count[nums[i]]++;
            }
            if(diff<=k){
                total+=i-j+1;;
            }
            else{
                while(j<n && j<=i && diff>k){
                    count[nums[j]]--;
                    if(count[nums[j]]==0)diff--;
                    j++;
                }
                total+=(i-j+1);
            }
        }
        return total;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return solve(nums,k)-solve(nums,k-1);
        //solve count total subarray between 1 to given value say(k) and another is (k-1)
        // their diff gives us all subarray with k difference 
    }
};
