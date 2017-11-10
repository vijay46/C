/*Program to print the below the pattern
 A
 A B
 A B C
 A B C D
 A B C
 A B
 A
 here number of lines count is 3
 */

#include<stdio.h>

int main(){

	int a,number_of_lines,i,j;

	//scans the number of lines
	printf("Enter the number of lines:");
	scanf("%d",&number_of_lines);
	
	//below code prints the pattern
	for(i=1;i<=number_of_lines+1;i++,printf("\n"))
		for(j=1,a=65;j<=i;j++,++a,printf(" "))
			printf("%c",a);

	for(i=number_of_lines;i>0;i--,printf("\n"))
		for(j=1,a=65;j<=i;j++,++a,printf(" "))
			printf("%c",a);
}
