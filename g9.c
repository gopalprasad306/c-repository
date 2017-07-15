/* 9) Write a C program to find the duplicate elements of a given array and find the count of
     duplicated elements.
 
     Ex: if  int a[] = {0,3,1,0,5,1,2,0,4,5}

      output : -
      The duplicate elements are  existed in an array 
       0  -- 3 times
       1  -- 2 times
       5  -- 2 times 
*/
#include<stdio.h>
main()
{
	int a[10],ele,i,count,j,k;
	ele=sizeof(a)/sizeof(a[0]);
	printf("enter %d elements\n",ele);
	for(i=0;i<ele;i++)
		scanf("%d",a+i);
	for(i=0;i<ele;i++)
	{
		count=1;
		for(j=i+1;j<ele;j++)
			if(a[i]==a[j])
			{
				count++;
				for(k=j;k<ele;k++)
					a[k]=a[k+1];
				j--;
				ele--;
			}
		if(count>1)
			printf("%d --%d\n",a[i],count);
	}
}
