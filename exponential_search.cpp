// Example program
#include <bits/stdc++.h>

using namespace std;
int binary(int s,int e,int *arr,int key)
{
	int m;
    while(s<=e)
    {
        m=(s+e)/2;
        if(key==arr[m])
        return m;
        else if(key<arr[m])
        e=m-1;
        else
        s=m+1;
    }
    return -1;
}
int exponential(int n,int *arr,int key)
{
    int jump=0;
    int i=0;
    int ind;
    int index=0;
    int start,end;
    if(key==arr[0])
    return 0;
    while(arr[jump]<=key)
    {
        jump=pow(2,i);
        ind=jump;
        if(arr[ind]>=key)
        {
        
            start=ind/2;
            if(ind>n)
            end=n-1;
            else
            end=ind;
            index= binary(start,end,arr,key);
        	return index;
        }
    i++;
    }
	return -1;
	
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int key;
    cin>>key;
    int index=exponential(n,arr,key);
    if(index>=0)
    cout<<index;
    else
    cout<<"Not Found";
}
