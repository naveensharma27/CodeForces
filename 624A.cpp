#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	double d,l,v1,v2;
	cin>>d>>l>>v1>>v2;
	printf("%0.20f",(l-d)/(v1+v2));
	return 0;
}
