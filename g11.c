/* 11) Write a program to copy the elements of one array into another array without duplicate
       items as a first slot, and store duplicate elements as a second slot.
  
     Ex:   source array           {10,2,4,5,2,1,3,4,6,5,8,9,2}

             destination arrays  {10,2,4,5,1,3,6,8,9} ,   { 2,2,4,5} 
                                                     first slot               second slot

       Take two different arrays for first and second slots. 
*/
#include<stdio.h>
main()
{
	int a[13],b[10],ele,i,j,count=0,k;
	ele=sizeof(a)/sizeof(a[0]);
	printf("enter %d element\n",ele);
	for(i=0;i<ele;i++)
		scanf("%d",a+i);
	for(i=0;i<ele;i++)
	{
		for(j=i+1;j<ele;j++)
		{
			if(a[i]==a[j])
			{
				b[count++]=a[j];
				for(k=j;k<ele;k++)
					a[k]=a[k+1];
				j--;
				ele=ele-1;
			}
		}
	}//
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");
	for(i=0;i<count;i++)
		printf("%d ",b[i]);
	printf("\n");
}//main








