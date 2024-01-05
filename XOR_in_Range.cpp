#include<bits/stdc++.h>
using namespace std;

int main()
{
	 int n;
	 cin>>n;
	 int arr[n];
	 for(int i=0;i<n;i++)
	 {
	 	cin>>arr[i];
	 }
	 int q;
	 cin>>q;

	 int brr[n+1][32];
	 for(int i=0;i<32;i++)
	 {
	 	brr[0][i]=0;
	 }
	 for(int i=1;i<=n;i++)
	 {
	 	for(int j=0;j<32;j++)
	 	{
	 		int x=0;
	 		if((arr[i-1] & 1<<(31-j))) x=1;
	 		brr[i][j]=brr[i-1][j]+x;
	 		//cout<<brr[i][j]<<" ";
	 	}
	 	//cout<<endl;
	 }
	 int ans=0;
	 /*for(int i=0;i<=n;i++)
	 {
	 	for(int j=0;j<32;j++)
	 	{
	 		cout<<brr[i][j]<<" ";
	 	}
	 	cout<<endl;
	 }*/  
	 while(q--)
	 {
	 	int l,r;
	 	cin>>l>>r;

	 	for(int i=0;i<32;i++)
	 	{
	 		//cout<<brr[r+1][i]-brr[l][i]<<" ";
	 		if((brr[r+1][i]-brr[l][i])%2 !=0 )
	 		{
	 			ans+=(1<<(31-i));
	 		}
	 	}
	 	cout<<endl;
	 	cout<<ans<<endl;
	 }
}