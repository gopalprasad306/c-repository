// 8) Write a C program which deletes the duplicate elements of an array.
#include<stdio.h>
main()
{
	int a[6],ele,i,j,k;
	ele=sizeof(a)/sizeof(a[0]);
	printf("enter %d elements\n",ele);
	for(i=0;i<ele;i++)
		scanf("%d",a+i);
	for(i=0;i<ele;i++)
	{
		for(j=i+1;j<ele;j++)
			if(a[i]==a[j])
			{
				for(k=j;k<ele;k++)
					a[k]=a[k+1];
				j--;
				ele--;
			}
	}//
	for(i=0;i<ele;i++)
		printf("%d ",a[0]);
	printf("\n");
}//main

