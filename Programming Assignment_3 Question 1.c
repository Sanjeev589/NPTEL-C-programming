/*
Write a C function to find the kth occurrence of an even integer in a sequence of non-negative integers, and then call your function from main. 

Your function should be according to the following declaration:

int find_even(int k);

Input
You are given the input in two lines:

The first line contains a positive integer k. 
In the second line, you will be given a sequence of numbers. 

You have to find the kth occurrence of n in the sequence below. 

The second line consists of a sequence of non-negative integers,
terminated with a -1.  The -1 is not part of the sequence.

Output
If there are  k even numbers in the sequence, then output the  kth
occurrence of even in the sequence. Otherwise, output a -1.


Sample Input
2
1 1 3 2 3 4 -1

Sample Output
4

*/

#include<stdio.h>
int find_even(int);

int arr[10];
void main()
{
int k ,n,i=-1;
  scanf("%d",&k);
  do
  {
    i++;
  scanf("%d",&arr[i]);
    
  
  }while(arr[i]!= -1);
  n= find_even(k);
  printf("%d",n);
}  
  int find_even(int k)
{
int i,s= -1,count=0;
  for (i=0;arr[i] != -1;i++)
  {
  if(arr[i]% 2== 0)
  {
    count++;
   if (count ==k)
     s=arr[i];
  }
  }
  return s ;
}

