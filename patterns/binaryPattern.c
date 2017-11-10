/*Program to print the below pattern
 1
 01
 101
 0101
 */

#include<stdio.h>

int main(){
 
	int i,j,a=1,number_of_lines;
	int rem_one, rem_two;
	//scans for the number of lines
	printf("Enter the number of lines:\n");
	scanf("%d",&number_of_lines);
	
	for(i=1;i<=number_of_lines;i++,printf("\n")){
		for(j=1;j<=i;j++,printf(" ")){
			if(((i%2!=0)&&(j%2!=0))||((i%2==0)&&(j%2==0)))
				printf("1");
			else
				printf("0");
		}
	}

 
 }
