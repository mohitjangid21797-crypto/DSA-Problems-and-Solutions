class Solution {
public:
 vector<int> maxSlidingWindow(vector<int>& arr, int k) {
        vector<int>ans;
        deque<int>dq;
        for(int i = 0 ; i<k-1 ; i++)
        {
            if(dq.empty())
            dq.push_back(i);
            else
            {
                while(!dq.empty()&&arr[i]>arr[dq.back()])
                dq.pop_back();
                dq.push_back(i);
            }
        }
        for(int i = k-1 ; i<arr.size() ; i++)
        {
            while(!dq.empty()&&arr[i]>arr[dq.back()])
                dq.pop_back();
            dq.push_back(i);
            if(dq.front()<=i-k)
            dq.pop_front();
            ans.push_back(arr[dq.front()]);
        }
         return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna