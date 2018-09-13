/*

Due on 2018-09-13, 23:59 IST
You are given a sequence of integers as input, terminated by a
-1. (That is, the input integers may be positive, negative or 0. A -1
in the input signals the end of the input.) 

-1 is not considered as part of the input.  

Find the second largest number in the input. You may not use arrays.
*/

#include<stdio.h>
void main()
{
	int n,arr[10],l,j,temp,i=0;
  	do
    {
    i++;
      scanf("%d",&arr[i]);
    }while(arr[i]!= -1);
  l=i;	
  i=1;
  while(arr[i]!= -1)
  {
  	for(j=i+1;arr[j]!= -1 ;j++)
    {
    	if(arr[i]>arr[j])
        {
        	temp= arr[i];
          	arr[i]= arr[j];
          	arr[j]= temp;
        }
    }
    i++;
  }
  printf("%d",arr[l-2]);
}
