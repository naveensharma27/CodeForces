/*

A. Roma and Lucky Numbers
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Roma (a popular Russian name that means 'Roman') loves the Little Lvov Elephant's lucky numbers.

Let us remind you that lucky numbers are positive integers whose decimal representation only contains lucky digits 4 and 7. For example, numbers 47, 744, 4 are lucky and 5, 17, 467 are not.

Roma's got n positive integers. He wonders, how many of those integers have not more than k lucky digits? Help him, write the program that solves the problem.

Input
The first line contains two integers n, k (1?=?n,?k?=?100). The second line contains n integers ai (1?=?ai?=?109) � the numbers that Roma has.

The numbers in the lines are separated by single spaces.

Output
In a single line print a single integer � the answer to the problem.

Examples
input
3 4
1 2 4
output
3
input
3 2
447 44 77
output
2
Note
In the first sample all numbers contain at most four lucky digits, so the answer is 3.

In the second sample number 447 doesn't fit in, as it contains more than two lucky digits. All other numbers are fine, so the answer is 2.



*/
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	int n,k,i,cnt=0,cntD,j;
	char a='4',b='7';
	string s;
	cin>>n>>k;
	for(i=0;i<n;i++)
	{
		cntD=0;
		cin>>s;
		for(j=0;j<s.length();j++)
		{
			if(s[j]=='4' || s[j]=='7')
				cntD++;
		}
		if(cntD<=k)
		{
			cnt++;
		}
	}
	cout<<cnt<<endl;
	return 0;
}
