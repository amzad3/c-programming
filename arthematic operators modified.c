#include<stdio.h>
#include<math.h>
int main()
{
	int powr(int ,int);
	int add(int ,int);
	int sub(int ,int);
	int mul(int , int);
	int div(int , int);
	int x,n,ch;
	printf("enter choice");
	scanf("%d",&ch);
	printf("enter values of x,n");
	scanf("%d%d",&x,&n);
	switch(ch)
	{
		case 1:
			printf("adding %d with %d gives %d\n",x,n,add(x,n));
		    break;
		case 2: 
		     printf("subtracting %d with %d gives %d\n",x,n,sub(x,n));
		     break;
		case 3:
			printf("multiplying %d with %d gives %d\n",x,n,mul(x,n));
			break;
		case 4:
			printf("dividing %d with %d gives %d\n",x,n,div(x,n));
			break;
		case 5:
			printf("%d power %d gives %d\n",x,n,powr(x,n));
			break;
	}
	return 0;
}
int add(int x,int n)
{
	return(x+n);
}
int sub(int x,int n)
{
	return(x-n);
}
int mul(int x,int n)
{
	return(x*n);
}
int div(int x,int n)
{
	return(x%n);
}
int powr(int x,int n)
{
	return(pow(x,n));
}

