We have a list of points on the plane.  Find the K closest points to the origin (0, 0).

(Here, the distance between two points on a plane is the Euclidean distance.)

You may return the answer in any order.  The answer is guaranteed to be unique (except for the order that it is in.)

 
 https://leetcode.com/problems/k-closest-points-to-origin/
 

Example 1:

Input: points = [[1,3],[-2,2]], K = 1
Output: [[-2,2]]
Explanation: 
The distance between (1, 3) and the origin is sqrt(10).
The distance between (-2, 2) and the origin is sqrt(8).
Since sqrt(8) < sqrt(10), (-2, 2) is closer to the origin.
We only want the closest K = 1 points from the origin, so the answer is just [[-2,2]].
Example 2:

Input: points = [[3,3],[5,-1],[-2,4]], K = 2
Output: [[3,3],[-2,4]]
(The answer [[-2,4],[3,3]] would also be accepted.)
 

Note:

1 <= K <= points.length <= 10000
-10000 < points[i][0] < 10000
-10000 < points[i][1] < 10000
Accepted
401.1K
Submissions
622.1K
Seen this question in a real interview before?

Yes

No


class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
      
        vector<vector<int>> v;
        
        priority_queue<pair<int,vector<int>>> pq;
        
        for(auto x: points)
        {
          int a=x[0];
          int b=x[1];
          int c=a*a+b*b;
          pq.push(make_pair(c,x)); 
          if(pq.size()>K)
          {
              pq.pop();
          }
        }
        
        while(!pq.empty())
        {
            auto y=pq.top();
            vector<int> d=y.second;
            v.push_back(d);
            pq.pop();
        }    
        return v;
    
    }
};
