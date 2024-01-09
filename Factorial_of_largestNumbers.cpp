#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
   	if(n==1) cout<<1;
   	else if(n==2) cout<<2;
   	else
   	{
	   	vector<int>v;
	   	v.push_back(2);
	   	int c=0;
	   	for(int i=3;i<=n;i++)
	   	{
	   		int x;
	   		for(int j=0;j<v.size();j++)
	   		{
	   			x=i*v[j]+c;
	   			v[j]=x%10;
	   			c=x/10;
	   		}
	   		while(c)
	   		{
	   			v.push_back(c%10);
	   			c=c/10;
	   		}
	   	}
	   	for(int i=v.size()-1;i>=0;i--)
	   	{
	   		cout<<v[i];
	   	}
	}
}
