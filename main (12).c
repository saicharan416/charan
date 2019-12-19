/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
#include<math.h>
int main()
{
	int n,r,sum=0,num,l=0;
	printf("enter the no");
	scanf("%d",&n);
	num=n;
	while(n!=0)
	{
		l++;
		n=n/10;
	}
	n=num;
	while(n!=0)
	{
		r=n%10;
		sum=sum+pow(r,1);
		n=n/10;
	}
	if(num==sum)
	printf("%d is armstrong no",num);
	else
	printf("%d id not armstrong no");
	return 0;
}