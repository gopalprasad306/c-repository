/* 2) Write a C program to input 10 numbers through the keyboard into an array and find the 
     biggest and smallest number in an Unsorted array without using any Sorting Technique.
*/
#include<stdio.h>
main()
{
	int a[5],ele,i,j,k,big,small,secondbig,secondsmall,l,m;
	ele=sizeof(a)/sizeof(a[0]);
	printf("enter %d element\n",ele);
	for(i=0;i<ele;i++)
		scanf("%d",a+i);
	big=small=a[0];
	j=k=0;
	for(i=1;i<ele;i++)
	{
		if(a[i]>big)
		{
			big=a[i];
			j=i;
		}
		if(a[i]<small)
		{
			small=a[i];
				k=i;
		}
	}
	l=j;m=k;
	printf("big =%d\nsmall =%d\n",big,small);
	if(j==ele-1)
	l=0;
	if(k==ele-1)
	m=0;
	secondbig=a[l+1];
	secondsmall=a[m+1];
	for(i=0;i<ele;i++)
	{
		if(a[i]>secondbig&&(i!=j))
			secondbig=a[i];
		if(a[i]<secondsmall&&(i!=k))
			secondsmall=a[i];
	}
	printf("secondbig =%d\nsecondsmall =%d\n",secondbig,secondsmall);
}




