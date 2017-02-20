/*

A. Playing with Paper
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
One day Vasya was sitting on a not so interesting Maths lesson and making an origami from a rectangular a mm ?×? b mm sheet of paper (a?>?b). Usually the first step in making an origami is making a square piece of paper from the rectangular sheet by folding the sheet along the bisector of the right angle, and cutting the excess part.


After making a paper ship from the square piece, Vasya looked on the remaining (a?-?b) mm ?×? b mm strip of paper. He got the idea to use this strip of paper in the same way to make an origami, and then use the remainder (if it exists) and so on. At the moment when he is left with a square piece of paper, he will make the last ship from it and stop.

Can you determine how many ships Vasya will make during the lesson?

Input
The first line of the input contains two integers a, b (1?=?b?<?a?=?1012) — the sizes of the original sheet of paper.

Output
Print a single integer — the number of ships that Vasya will make.

Examples
input
2 1
output
2
input
10 7
output
6
input
1000000000000 1
output
1000000000000

*/

#include<iostream>
using namespace std;

int main()
{
	long long int a,b,ans=0;
	cin>>a>>b;
	while(a>0 && b>0 && a!=b)
	{
		ans+=a/b;
		a=a%b;
		if(a<b)
		swap(a,b);
	}
	cout<<ans<<endl;
	return 0;
}
