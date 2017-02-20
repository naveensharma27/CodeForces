/*

A. Asphalting Roads
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
City X consists of n vertical and n horizontal infinite roads, forming n?�?n intersections. Roads (both vertical and horizontal) are numbered from 1 to n, and the intersections are indicated by the numbers of the roads that form them.

Sand roads have long been recognized out of date, so the decision was made to asphalt them. To do this, a team of workers was hired and a schedule of work was made, according to which the intersections should be asphalted.

Road repairs are planned for n2 days. On the i-th day of the team arrives at the i-th intersection in the list and if none of the two roads that form the intersection were already asphalted they asphalt both roads. Otherwise, the team leaves the intersection, without doing anything with the roads.

According to the schedule of road works tell in which days at least one road will be asphalted.

Input
The first line contains integer n (1?=?n?=?50) � the number of vertical and horizontal roads in the city.

Next n2 lines contain the order of intersections in the schedule. The i-th of them contains two numbers hi,?vi (1?=?hi,?vi?=?n), separated by a space, and meaning that the intersection that goes i-th in the timetable is at the intersection of the hi-th horizontal and vi-th vertical roads. It is guaranteed that all the intersections in the timetable are distinct.

Output
In the single line print the numbers of the days when road works will be in progress in ascending order. The days are numbered starting from 1.

Examples
input
2
1 1
1 2
2 1
2 2
output
1 4 
input
1
1 1
output
1

*/
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	int n,i,x,y;
	cin>>n;
	bool h[n+1];
	bool v[n+1];
	memset(h,false,sizeof(h));
	memset(v,false,sizeof(v));
	for(i=1;i<=n*n;i++)
	{
		cin>>x>>y;
		if(!h[x] && !v[y])
		{
			cout<<i<<endl;
			h[x]=true;
			v[y]=true;
		}
	}
	return 0;
}
