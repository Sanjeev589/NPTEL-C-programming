/*
Level: Medium

In this assignment, you will be given an NxN matrix. You have to
determine whether the matrix is a triangular matrix. 

The diagonal of the matrix M of size NxN is the set of entries M(0,0),
M(1,1), M(2,2), ..., M(N,N). 

A matrix is upper triangular if every entry below the diagonal is
0. For example,  
1 1 1
0 0 1
0 0 2
is an upper triangular matrix. (The diagonal itself, and the entries
above and below the diagonals can be zeroes or non-zero integers.) 

A matrix is lower triangular if every entry above the diagonal is
0. For example, 
2 0 0
3 1 0
4 2 2
is a lower triangular matrix. 

A matrix is triangular if it is either upper triangular or lower
triangular or both.  

You may not use arrays for this program.

Input
First, you will be given N, which is the size of the matrix.

Then you will be given N rows of integers, where each row consists of
N integers separated by spaces. 

Output
If the input matrix is triangular, then print yes. Otherwise, print
no. 
*/

#include<stdio.h>
int main()
{
  int n, arr[10][10],i,j,k,up=0,dp=0;
  scanf("%d",&n);
  
    for(i=0;i<n;i++)
      for(j=0;j<n;j++)
        scanf("%d",&arr[i][j]);
      
    for(i=0;i<n;i++)
    {
      for(j=0;j<i;j++)
        if(arr[i][j]!= 0)
        	up=1;
        
      for(k=i+1;k<n;k++)
        if(arr[i][k]!=0)
        	dp=1;
        
    }   
  if(up==0 || dp==0)
    printf("yes");
  else
    printf("no");

    
}
