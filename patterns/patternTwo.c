/*Program to print the below the pattern
 	*
       * *
      * * *
     * * * *
*/

#include<stdio.h>
int main(){
	
	int i,j,number_of_lines;

	//scans the number of lines
	printf("Enter the number of lines:\n");
	scanf("%d",&number_of_lines);

	//below code prints the pattern
	for(i=1;i<=number_of_lines;i++,printf("\n")){
		for(j=1;j<=number_of_lines-i;j++)
			printf(" ");
		for(j=1;j<=i;j++)
			printf("* ");
	}
}

