/*

A. GukiZ and Contest
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Professor GukiZ likes programming contests. He especially likes to rate his students on the contests he prepares. Now, he has decided to prepare a new contest.

In total, n students will attend, and before the start, every one of them has some positive integer rating. Students are indexed from 1 to n. Let's denote the rating of i-th student as ai. After the contest ends, every student will end up with some positive integer position. GukiZ expects that his students will take places according to their ratings.

He thinks that each student will take place equal to . In particular, if student A has rating strictly lower then student B, A will get the strictly better position than B, and if two students have equal ratings, they will share the same position.

GukiZ would like you to reconstruct the results by following his expectations. Help him and determine the position after the end of the contest for each of his students if everything goes as expected.

Input
The first line contains integer n (1?=?n?=?2000), number of GukiZ's students.

The second line contains n numbers a1,?a2,?... an (1?=?ai?=?2000) where ai is the rating of i-th student (1?=?i?=?n).

Output
In a single line, print the position after the end of the contest for each of n students in the same order as they appear in the input.

Examples
input
3
1 3 3
output
3 1 1
input
1
1
output
1
input
5
3 5 3 4 5
output
4 1 4 3 1

*/

#include<iostream>
using namespace std;

int main()
{
	int i,n,r=1,prev,max;
	cin>>n;
	int rating[n];
	int rank[2001]={0};
	int pos[2001];
	for(i=0;i<n;i++)
	{
		cin>>rating[i];
		rank[rating[i]]++;
		if(rating[i]>max)
		{
			max=rating[i];
		}
	}

	for(i=max;i>0;i--)
	{
		if(rank[i]!=0)
		{
			pos[i]=r;
			r+=rank[i];
		}
	}
	
	for(i=0;i<n;i++)
	{
		cout<<pos[rating[i]]<<" ";
	}
	return 0;
}
