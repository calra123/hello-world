/* Interpolation Search 
Running time : O(log(log n)) - when array is sorted and uniformally distributed
Worst case: O(n)
Auxiliary space:O(1)
Extra space required
*/


#include <iostream>
using namespace std;
int interpolation_search(int n,int *arr,int key)
{
	int l,u;
	l=0;
	u=n-1;
	int pos;
	

	while(l<=u)
	{
		pos=l+((key-arr[l])*(u-l)/(arr[u]-arr[l]));       //Probe Position formula
		if(key==arr[pos])
		{
			return pos;
		}
		else if(key<arr[pos])
		{
			u=pos-1;
		}
		else
		{l=pos+1;
		}
	}
	return -1;
}
int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];

	int key;
	cin>>key;
	int index;
	
	index=interpolation_search(n,arr,key);
	cout<<index;
	
	
	
	// your code goes here
	return 0;
}
