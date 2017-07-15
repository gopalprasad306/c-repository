/* 3) Write a C program to input 10 numbers through the keyboard and find the number
     of prime numbers count, store  them into a seperate array and display it.
*/
#include<stdio.h>
main()
{
	int a[5],ele,i,j,count=0,k=0,b[10];
	ele=sizeof(a)/sizeof(a[0]);
	printf("enter %d element\n",ele);
	for(i=0;i<ele;i++)
		scanf("%d",a+i);
	for(i=0;i<ele;i++)
	{
		for(j=2;j<a[i];j++)
			if(a[i]%j==0)
				break;
		if(a[i]==j)
		{
			count++;
			b[k++]=a[i];
		}
	}
	printf("count =%d\n",count);
	for(i=0;i<count;i++)
		printf("%d ",b[i]);
	printf("\n");
}
