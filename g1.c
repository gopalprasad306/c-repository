/* 1) Write a C program to input 10 numbers through the keyboard into an array and
     display the results of addition of even numbers and product of odd numbers.
*/
#include<stdio.h>
main()
{
	int a[6],ele,i,sum=0,mul=1;
	ele=sizeof(a)/sizeof(a[0]);
	printf("enter %d element\n",ele);
	for(i=0;i<ele;i++)
		scanf("%d",a+i);
	for(i=0;i<ele;i++)
	{
		if(a[i]%2==0)
			sum+=a[i];
		else
			mul*=a[i];
	}
	printf("summation of even numbers in array are %d\n",sum);
	if(mul==1)
		mul=0;
	printf("multiplication of odd numbers in array are %d\n",mul);
}//
