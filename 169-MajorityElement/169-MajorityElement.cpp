// Last updated: 28/08/2026, 21:45:16
1class Solution {
2public:
3    int majorityElement(vector<int>& nums) {
4        int cnt = 0;
5        int el;
6
7        for(int i=0; i<nums.size(); i++){
8            if(cnt == 0){
9                cnt=1;
10                el = nums[i];
11            }
12            else if(nums[i]==el){
13                cnt++;
14            }
15            else{
16                cnt--;
17            }
18
19        }
20        /*int cnt1=0;
21        for(int i = 0;i<nums.size(); i++){
22            if(nums[i]==el) cnt1++;
23        }
24        if(cnt1>(nums.size()/2)){
25            return el;
26        }
27        return -1;
28    }*/
29    return el;
30    }
31};