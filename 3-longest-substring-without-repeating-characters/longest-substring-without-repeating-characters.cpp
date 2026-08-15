class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size() , first = 0 , second = 0 , length = 0;
        vector<int>count(256,0);
        while(second<n)
        {
            while(count[s[second]])
            {
                count[s[first]] = 0;
                first++;
            }
            count[s[second]] = 1;
            length = max(length , second-first+1);
            second++;
        }
        return length;


        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna