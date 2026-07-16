//using sorting TC: O(n*log(n))
// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         int n=nums.size();
//         sort(nums.begin(),nums.end());
//         return nums[n/2];
//     }
// };
//using hashmap TC: O(n)
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map <int, int> m;
        for(int i:nums)
            m[i]++;
        
        int maxval= nums[0];

        for(auto i:m)
        {
            if(i.second>m[maxval])
                maxval=i.first;
        }
        return maxval;
    }
};