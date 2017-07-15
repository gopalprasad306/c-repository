// 5) Write a C program to reverse  the elements of a given array.
#include<stdio.h>
main()
{
	int a[6],ele,i,j,temp;
	ele=sizeof(a)/sizeof(a[0]);
	printf("enter %d elements\n",ele);
	for(i=0;i<ele;i++)
		scanf("%d",a+i);
	for(i=0,j=ele-1;i<j;i++,j--)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
	for(i=0;i<ele;i++)
		printf("%d ",*(a+i));
	printf("\n");
}
