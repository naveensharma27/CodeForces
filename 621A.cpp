/*

A. Wet Shark and Odd and Even
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Today, Wet Shark is given n integers. Using any of these integers no more than once, Wet Shark wants to get maximum possible even (divisible by 2) sum. Please, calculate this value for Wet Shark.

Note, that if Wet Shark uses no integers from the n integers, the sum is an even integer 0.

Input
The first line of the input contains one integer, n (1?=?n?=?100?000). The next line contains n space separated integers given to Wet Shark. Each of these integers is in range from 1 to 109, inclusive.

Output
Print the maximum possible even sum that can be obtained if we use some of the given integers.

Examples
input
3
1 2 3
output
6
input
5
999999999 999999999 999999999 999999999 999999999
output
3999999996

*/

#include<iostream>
using namespace std;
 
int main()
{
	long long int x,n,i,sum=0,min=100000000000000;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>x;
		sum+=x;
		if(x%2==1 && x<min)
		{
			min=x;
		}
	}
	if(sum%2==1)
		cout<<sum-min<<endl;
	else
		cout<<sum<<endl;
	return 0;
} 
