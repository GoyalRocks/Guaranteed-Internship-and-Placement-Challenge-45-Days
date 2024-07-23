//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    long long findMinDiff(vector<long long> arr, long long n, long long m){
    //code
    long long minNum=9223372036854775807;
    long long diff;
    long long right=m-1;
    long long left=0;
    sort(arr.begin(),arr.end());
    while(right<n){
        diff=arr[right]-arr[left];
        minNum=min(minNum,diff);
        left++;
        right++;
    }
    return minNum;
    }   
};

//{ Driver Code Starts.
int main() {
	long long t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		vector<long long> a;
		long long x;
		for(long long i=0;i<n;i++)
		{
			cin>>x;
			a.push_back(x);
		}
		
		long long m;
		cin>>m;
		Solution ob;
		cout<<ob.findMinDiff(a,n,m)<<endl;
	}
	return 0;
}
// } Driver Code Ends
