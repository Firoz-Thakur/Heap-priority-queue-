https://practice.geeksforgeeks.org/problems/merge-k-sorted-arrays/1


class Solution
{
    public:
    //Function to merge k sorted arrays.
    vector<int> mergeKArrays(vector<vector<int>> arr, int k)
    {
    //code here
      priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>> ,greater<pair<int,pair<int,int>>> > pq;
      
      for(int i=0;i<k;i++)
      {
          pq.push(make_pair(arr[i][0],make_pair(i,0)));
      }
      vector<int> v;
      while(!pq.empty())
      {
          auto node=pq.top();
          int x=node.first;
          auto y=node.second;
          pq.pop();
          v.push_back(x);
          int row=y.first;
          int col=y.second+1;
          if(col<k)
          {
               pq.push(make_pair(arr[row][col],make_pair(row,col)));
              
          }
      }
    return v;
    }
};
