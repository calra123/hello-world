#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int result=0;
	int arr[32]={0};
	while(n>0)
	{
		int num;
		cin>>num;
		bitset<32> final(num);
	
		for(int i=0;i<32;i++)
		arr[i]+=final[i];
	n--;}
	bitset<32> ans(0);
	for(int i=0;i<32;i++)
	{
		arr[i]=arr[i]%3;
		ans[i]=arr[i];
	}
	for(int i=31;i>=0;i--)
	{
		result+=ans[i]*pow(2,i);
	}
	
	cout<<result;
	// your code goes here
	return 0;
}
