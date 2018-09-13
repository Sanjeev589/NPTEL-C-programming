/* 
Due on 2018-09-13, 23:59 IST
You are given a sorted (either in the increasing or in the decreasing order) sequence of numbers, ending with a -1. You can assume that are at least two numbers before the ending -1. 

Let us call the sequence x0 x1 ... xn -1.

You have to output the number of distinct elements in the sorted sequence.

Kindly do not use arrays in the code.
*/

#include<stdio.h>
void main()
{
  int n,arr[10],i=0,count=0;
  do
  {
    i++;
  	scanf("%d",&arr[i]);
  }
  while(arr[i]!= -1 );
  i=1;
  while(arr[i]!= -1)
  {
    if(arr[i]!= arr[i+1])
     count++;
    i++;
  }
  printf("%d",count);
}
