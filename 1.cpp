#define ll long long 
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ll n;
	cin>>n;
	ll arr[n];
	for(ll i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(ll i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		{
			arr[i]--;
		}
		
	}
		for(ll i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

111
