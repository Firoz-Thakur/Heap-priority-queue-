Given an array arr[] of N integers in which elements may be repeating several times. Also, a positive number K is given and the task
is to find sum of total frequencies of K most occurring elements






int print_N_mostFrequentNumber(int ar[],int n, int k) 
{ 
	// Your code here	
	unordered_map<int,int> mp;
	for(int i=0;i<n;i++)
	{
	     mp[ar[i]]++;
	}
  priority_queue<int> p;
  for(auto it=mp.begin();it!=mp.end();it++)
  {
      p.push(it->second);
  }
 int sum=0;
 while(k--)
 {
     sum=sum+p.top();
     p.pop();
 }
return sum;	
} 
