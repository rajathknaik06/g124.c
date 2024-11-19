/*David loves patterns and arrays. He has given you a 2D array and wants you to print its elements in a special snake pattern. 



In this pattern, if the row number is even, the elements of that row should be printed from right to left. If the row number is odd, the elements should be printed from left to right.



Write a program to print the given 2D array in the snake pattern as per David's request.



Note: Row number = 1, 2, 3, ... etc.

Input format :
The first line of input consists of two integers, m, and n, representing the dimensions of the 2D array.

This is followed by m lines, each containing n space-separated integers, representing the elements of the 2D array.

Output format :
The output prints the space separated elements of the 2D array in the snake pattern, following the rules mentioned above.*/

#include<stdio.h>
int main() 
{ 
     int m,n,i,j;
     scanf("%d%d",&m,&n);
     int arr[m][n];
     for(i=0;i<m;i++) {
         for(j=0;j<n;j++) {
             scanf("%d", &arr[i][j]);
         }
     }
     for (int i = 0; i < m; i++) { 
		if (i % 2 == 0) { 
			for (int j = 0; j < n; j++) 
			    printf("%d ",arr[i][j]);
		} else { 
			for (int j = n - 1; j >= 0; j--) 
				printf("%d ",arr[i][j]);
		} 
	} 
	return 0; 
} 
