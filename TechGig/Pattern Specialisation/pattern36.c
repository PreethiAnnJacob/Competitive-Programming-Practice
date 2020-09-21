/*
You need to take an integer input and then draw the pattern according to it. Say for example if you enter 5 then, the pattern should be like this-
            1
         3 3 3
      5 5 5 5 5
   7 7 7 7 7 7 7
9 9 9 9 9 9 9 9 9 

Input Format
You will take an integer input n from stdin.

Constraints
1 <= n <= 1000

Output Format
Your output should be the pattern according to the input which you had entered. 
*/

#include<stdio.h>
int main(int argc, char *a[])
{	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i;j++)
			printf("  ");
		for(int j=1;j<=(2*i-1);j++)
			if(j==(2*i-1))
				printf("%d\n",(2*i-1));
			else
				printf("%d ",(2*i-1));
	}
}