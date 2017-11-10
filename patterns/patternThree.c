/*Program to print the below pattern
  * * * * *
   * * * *
    * * *
     * *
      * 
*/
#include<stdio.h>
int main(){

	int i,j,number_of_lines;

	//scan the number of lines
	printf("Enter the number of lines:\n");
	scanf("%d",&number_of_lines);

	//below lines prints the pattern
	for(i=number_of_lines;i>0;i--,printf("\n")){
		for(j=1;j<=number_of_lines-i;j++)
			printf(" ");
		for(j=1;j<=i;j++)
			printf("* ");
	}
}

