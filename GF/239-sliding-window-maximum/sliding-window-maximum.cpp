class Solution {
public:
 vector<int> maxSlidingWindow(vector<int>& arr, int k) {
       deque<int>q;
       vector<int>ans;
       for(int i = 0 ; i<k-1; i++)
       {
        if(q.empty())
        q.push_back(i);
        else
        {
            while(!q.empty()&&arr[i]>arr[q.back()])
            q.pop_back();
            q.push_back(i);
        }
       }
       for(int i = k-1 ; i<arr.size() ; i++)
       {
        while(!q.empty()&&arr[i]>arr[q.back()])
        q.pop_back();
        q.push_back(i);
        if(q.front()<=i-k)
        q.pop_front();
        ans.push_back(arr[q.front()]);
       }
       return ans;
    }
};