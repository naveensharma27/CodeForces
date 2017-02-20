/*

B. Pashmak and Flowers
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Pashmak decided to give Parmida a pair of flowers from the garden. There are n flowers in the garden and the i-th of them has a beauty number bi. Parmida is a very strange girl so she doesn't want to have the two most beautiful flowers necessarily. She wants to have those pairs of flowers that their beauty difference is maximal possible!

Your task is to write a program which calculates two things:

The maximum beauty difference of flowers that Pashmak can give to Parmida.
The number of ways that Pashmak can pick the flowers. Two ways are considered different if and only if there is at least one flower that is chosen in the first way and not chosen in the second way.
Input
The first line of the input contains n (2?=?n?=?2·105). In the next line there are n space-separated integers b1, b2, ..., bn (1?=?bi?=?109).

Output
The only line of output should contain two integers. The maximum beauty difference and the number of ways this may happen, respectively.

Examples
input
2
1 2
output
1 1
input
3
1 4 5
output
4 1
input
5
3 1 2 3 1
output
2 4

*/
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	long long int max=-1,min=1000000001,n,i,minC=0,maxC=0,ans2=0;
	bool flag;
	cin>>n;
	int a[n];
	
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]>max)
			max=a[i];
		if(a[i]<min)
			min=a[i];
	}//for
	if(max==min)
	{
		ans2=n*(n-1)/2;
	}
	else
	{
		for(i=0;i<n;i++)
		{
			if(a[i]==min)
				minC++;
			if(a[i]==max)
				maxC++;
		
		}
		ans2=minC*maxC;
	}
	
	cout<<max-min<<" "<<ans2<<endl;
	return 0;
}
