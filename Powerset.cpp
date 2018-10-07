/*
Generating subarrays using recusrsion
O(2^n): Running time
*/
#include <iostream>
using namespace std;
int n;
void subset(int *arr,int start,int end)
{
	if(end==n)
	return;
	else if(start>end)
	{
		subset(arr,0,end+1);
	}
	else
	{
		cout<<"{";
		for(int i=start;i<=end;i++)
		cout<<arr[i];
		cout<<"}, ";
		subset(arr,start+1,end);
	}
}
int main() {
	cin>>n;
	int start =0;
	int end=0;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	subset(arr,start,end);


	// your code goes here
	return 0;
}
