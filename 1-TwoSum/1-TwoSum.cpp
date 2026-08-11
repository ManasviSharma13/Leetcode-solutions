// Last updated: 11/08/2026, 16:43:41
1class Solution {
2public:
3    vector<int> twoSum(vector<int>& nums, int target) {
4        int n = nums.size();
5        vector<int> res;
6
7        for(int i =0; i<n; i++){
8            
9            int comp = target - nums[i];
10            for(int j= i+1; j<n; j++){
11                if(nums[j]==comp){
12                    res.push_back(i);
13                    res.push_back(j);
14                    break;
15                }
16                
17            }
18        }
19        return res;
20    }
21};