/*Program to print the below pattern
    *
   * *
  * * *
   * *
    *
   number of lines here are two
 */

#include<stdio.h>

int main(){
	
	int i,j,number_of_lines;

	//scans the number of lines for
	//which the output should be printed
	
	printf("Enter the number of lines:\n");
	scanf("%d",&number_of_lines);

	//below code prints the pattern
	for(i=1;i<=number_of_lines+1;i++,printf("\n")){
		for(j=1;j<=number_of_lines-i+1;j++)
			printf(" ");
		for(j=1;j<=i;j++)
			printf("* ");

	}
	for(i=number_of_lines;i>0;i--,printf("\n")){
		for(j=1;j<=number_of_lines-i+1;j++)
			printf(" ");
		for(j=1;j<=i;j++)
			printf("* ");
	}
}

