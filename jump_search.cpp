#include<bits/stdc++.h>
using namespace std;

int jump_search(int n, int *arr,int e)
{
int i=0,block=0;
	while(i<n)
{
	if(i==n)
	return -1;
	
	
	block=sqrt(n);
	

	if(arr[i]==e)
	return arr[i];
	if(e>arr[n-1])
	return -1;
	else if(e>arr[i])
	i+=block;
		
	
	else if(e<arr[i])
	{	
		
		for(int j=i-block;j<=i;j++)	//correct
		{	
			if(arr[j]==e)
			return arr[j];
		
		}
	}
	else
	return -1;
	
}
}
int main()
{
	int n;
	cin>>n;
	//cout<<"Enter the element to be searched";
	int e;
	cin>>e;
	//cout<<"Enter the array";
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	int ans=0;
	ans=jump_search(n,arr,e);
	cout<<ans;
}
