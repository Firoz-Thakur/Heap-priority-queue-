https://leetcode.com/problems/top-k-frequent-elements/
Given a non-empty array of integers, return the k most frequent elements.

Example 1:

Input: nums = [1,1,1,2,2,3], k = 2
Output: [1,2]
Example 2:

Input: nums = [1], k = 1
Output: [1]
Note:

You may assume k is always valid, 1 ≤ k ≤ number of unique elements.
Your algorithm's time complexity must be better than O(n log n), where n is the array's size.
It's guaranteed that the answer is unique, in other words the set of the top k frequent elements is unique.
You can return the answer in any order.
Accepted
525.2K
Submissions
844K
Seen this question in a real interview before?

Yes

No







class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
      
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        priority_queue<pair<int,int>,vector<pair<int,int>> ,greater<pair<int,int>>> pq;
        for(auto x : mp)
        {
           pq.push(make_pair(x.second,x.first));
           if(pq.size()>k)
                pq.pop();
        }
        
        vector<int> v;
        while(!pq.empty())
        {
            auto x =pq.top();
            v.push_back(x.second);
            pq.pop();
        }
        reverse(v.begin(),v.end());
        return v;
    }
};
