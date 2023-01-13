class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int maj=nums[0];
        int n=nums.size();
        int count=1;
        for(int i=1;i<n;i++)
        {
            if(count==0)
                maj=nums[i];
            if(maj==nums[i])
            {
                count++;
            }
            else{
                count--;
            }
        }
        return maj;
    }
};