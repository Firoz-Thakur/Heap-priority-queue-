https://practice.geeksforgeeks.org/problems/nearly-sorted-algorithm/0

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    int ar[n];
	    priority_queue<int,vector<int>, greater<int> > pq;
	    for(int i=0;i<n;i++)
	    {
	        cin>>ar[i];
	    }
	   for(int i=0;i<n;i++)
	   {
	       pq.push(ar[i]);
	       if(pq.size()>k)
	       {
	           cout<<pq.top()<<" ";
	           pq.pop();
	       }
	   }
	   while(!pq.empty())
	   {
	        cout<<pq.top()<<" ";
	        pq.pop();
	   }
	    
	    
	 cout<<endl;   
	}
	
	
	return 0;
}
