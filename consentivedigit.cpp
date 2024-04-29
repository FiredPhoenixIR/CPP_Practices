//#include<vector>
//
//class Solution {
//public:
//    int findMaxConsecutiveOnes(std::vector<int>& nums) {
//        int result = 0;
//        int temp = 0;
//        int size = nums.size();
//        for (int i = 0; i < size; i++) {
//            if (nums[i] == 1) {
//                result++;
//                if (nums[i] == nums[i - 1]) {
//                    result++;
//                }
//                temp = result;
//            }
//            else if (nums[i] != 1) {
//                result = 0;
//            }
//        }
//        if (result > temp) {
//            temp = result;
//        }
//        return temp;
//    }
//};
//
//#pragma GCC optimize("Ofast")
//static auto _ = []() {
//    std::ios::sync_with_stdio(false);
//    std::cin.tie(nullptr);
//    std::cout.tie(nullptr);
//    return nullptr;
//    }();
//
//    class Solution {
//    public:
//        int findMaxConsecutiveOnes(vector<int>& nums) {
//            int cnt = 0;
//            int ans = -1;
//
//            for (auto i : nums)
//            {
//                if (i == 1)
//                {
//                    cnt++;
//                }
//                else
//                {
//                    ans = max(ans, cnt);
//                    cnt = 0;
//                }
//            }
//            ans = max(ans, cnt);
//            return ans;
//        }
//    };
