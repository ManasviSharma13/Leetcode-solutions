// Last updated: 21/08/2026, 02:03:20
1class Solution {
2public:
3    void sortColors(vector<int>& nums) {
4        int n = nums.size();
5        for(int i=n-1; i>=1; i--){
6            for(int j=0;j<i;j++){
7                if(nums[j]>nums[j+1]){
8                    int temp = nums[j+1];
9                    nums[j+1] = nums[j];
10                    nums[j] = temp;
11                }
12            }
13        }
14    }
15};