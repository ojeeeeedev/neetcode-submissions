#include <cmath>
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        vector<int> conOnes;
        int streak = 0;
        int max = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                streak++;
                    if (streak > max)
                        max = streak;
            }
            else (streak = 0);

        }

        cout << max << endl;
        cout << streak << endl;
        
        return max;
    }
};