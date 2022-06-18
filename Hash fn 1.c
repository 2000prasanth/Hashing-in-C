#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>

int main()
{
	int q[11];
	int a=10,b=19,c=35,d=43;
	int w,x,y,z;
	w=a%10;
	x=b%10;
	y=c%10;
	z=d%10;
	q[w]=a;
	q[x]=b;
	q[y]=c;
	q[z]=d;
	int p,r;
	printf("enter an element to search \n");
	scanf("%d",&p);
	r=p%10;
if(q[r]==p)
{
		printf("element %d is in %d rd array position \n",q[r],r);
	}
	else
	{
		printf("error \n");
	}
		return 0;
}
