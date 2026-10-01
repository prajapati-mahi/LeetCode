class Solution {
public:
    int smallestAbsent(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        
        int sum = 0;
        for(int i = 0; i < n; i++) {
            sum += nums[i];
        }
        
        int avg = sum / n;
        int target = avg + 1; 
        
        int candidate = max(1, target);
        
        for (int i = 0; i < n; i++) {
            if (nums[i] == candidate) {
                candidate++;
            }
        }
        
        return candidate;
    }
};