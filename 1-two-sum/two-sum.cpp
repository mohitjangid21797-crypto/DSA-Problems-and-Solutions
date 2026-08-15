class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans = nums;
        sort(ans.begin() , ans.end());
        int start = 0 , end = nums.size()-1 , num1 , num2 , index1 =-1 , index2 = -1;
        while(start<=end)
        {
            int x = ans[start] + ans[end];
            if(x==target)
            {
                num1 = ans[start];
                num2 = ans[end];
                break;
            }
            else if(x<target)
            start+=1;
            else
            end-=1;
        }
        for(int i = 0 ; i<nums.size() ; i++)
        {
            if(nums[i]==num1)
            {
                index1 = i;
                break;
            }
        }
        for(int i = 0 ; i<nums.size() ; i++)
        {
            if(nums[i]==num2&&i!=index1)
            {
                index2 = i;
                break;
            }
        }
        return{index1 , index2};
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna