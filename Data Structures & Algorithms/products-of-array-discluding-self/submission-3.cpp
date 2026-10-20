class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> r(nums.size());
        int prod = 1;
        int zeroCount = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                prod *= nums[i];
            } else {
                zeroCount++;
            }
        }

        for (int i = 0; i < nums.size(); i++) {
            if (zeroCount > 1) {
                r[i] = 0;
            }
            else if (zeroCount == 1) {
                if (nums[i] == 0) {
                    r[i] = prod;
                } else {
                    r[i] = 0;
                }
            }
            else {
                r[i] = prod / nums[i];
            }
        }

        return r;
    }
};

