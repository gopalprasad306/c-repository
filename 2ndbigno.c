// program to find second bigger number using single for loop
#include<stdio.h>
main()
{
	int i, m1, m2, n, num;
	printf("Enter how many numbers\n");
	scanf("%d",&n);
	printf("\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&num);
		if(i==0)
		{
			m1=m2=num;
		}
		else if(num>m1)
		{
			m2 = m1; 
			m1 = num; 
		}
		else if(num>m2)
		{
			m2=num;
		}
		else if(m1==m2)
		{
			m2=num;
		}
	}
	printf("Second largest number is %d\n",m2);
}
