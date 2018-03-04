//Prime numbers
#include <stdio.h>
#include <math.h>

main(){
	unsigned long int number; //the limit of calculating
	unsigned long int n; //dividend, it increases until it reaches "number"
	int d=0; //divisor
	int a=0; //determinates if n is prime or not
	
	do{
	printf ("Up to what number you want to calculate prime numbers?");
	scanf ("%d", &number);
	} while (number<0);
	
	printf ("2\n"); // print 2
	
	for (n=3;n<=number;n+=2){ //Starting from 3 and ending in "number" (modifiable) 
		
		for (d=3;d<=sqrt(n);d+=2){ //divide "n" starting from 3, adding 2, until the divisor reaches the square root of "n"
			if (n%d==0){ //if "n" is divisible of "d", then "n" is not a prime number
			a+=1; //add 1 to "a"
			break; //end the block
			}	
		}
		
		if (a!=0){ //If "a" is different of 0, then "n" is not a prime number, so i continue with the next number "n"
			a = 0; //reset "a" to 0, to evaluate again.
			continue; //continue to the next "n", the printf doesnt execute
		}
	
	printf ("%ld\n", n); //prints only if "a" is 0
	}	
}
