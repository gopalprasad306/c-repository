/* 10) Write a program to print the non repeted numbers of  a given array.
        Ex : if   int a[] = {0,3,1,0,5,1,2,0,4,5}

                Output :  3, 2, 4
*/
#include<stdio.h>
main()
{
	int a[5],ele,i,j,count;
	ele=sizeof(a)/sizeof(a[0]);
	printf("enter %d element\n",ele);
	for(i=0;i<ele;i++)
		scanf("%d",a+i);
	for(i=0;i<ele;i++)
	{
		count=0;
		for(j=0;j<ele;j++)
			if(a[i]==a[j])
				count++;
		if(count==1)
			printf("%d ",a[i]);
	}
	printf("\n");
}
