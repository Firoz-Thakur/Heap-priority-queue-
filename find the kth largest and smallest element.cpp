Given an array arr[] of N positive integers and a number K. The task is to find the kth largest element in the array.

You are required to complete the method KthLargest() which takes 3 arguments and returns the Kth Largest element.

Constraints:
1 <= T <= 100
1 <= N <= 106
1 <= arr[i] <= 106
1 <= K <= N

Example:
Input:
2
5 3
3 5 4 2 9
5 5
4 3 7 6 5

Output:
4
3

Explanation:
Testcase 1: Third largest element in the array is 4.
Testcase 2: Fifth largest element in the array is 3.



int KthLargest(int ar[], int n, int k) {
    // Your code here
    
    priority_queue<int> p(ar,ar+n);
    k--;
    while(k--)
    {
        p.pop();
    }
    return p.top();
}

kth smallest number


int kthSmallest(int ar[], int n, int k){
    // Your code here
 priority_queue<int> q(ar,ar+n);    
 int x=n-k;
 while(x--)
 {
     q.pop();
 }
    return q.top();
}

