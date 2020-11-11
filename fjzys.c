#include<stdio.h>
int main()
{
	int n,i;
	printf("请输入一个数：");
	scanf("%d",&n);
	printf("%d=",n);
	for(i=2;i<=n;i++) 
	{
		while(n!=i) 
		{
			if(n%i==0)//为合数的情况 
			{
				printf("%d*",i);//输出一个因子 
				n=n/i;//原数除去这个因子 
			}
			else break;
		}
	} 
	 printf("%d",n);
	 return 0;
	
 } 
