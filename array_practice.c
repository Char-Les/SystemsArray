#include <stdio.h>
#include <time.h>
#include <stdlib.h>
//Charles Weng
//Systems Period 4
//HW3 -- Get to the Point
//2017-9-25

int main(){
	//create two arrays large enough for 10 ints
	int random1[10];
	int random2[10];

	//populate first one iwth random numbers
	srand(time(NULL));
	int i = 0;
	for(; i < 10; i++)
		random1[i] = rand();

	//set last value to 0
	random1[9] = 0;

	//print out this array's values
	printf("The Original:\n");
	for(i = 0; i < 10; ++i)
		printf("random1[%d] = %d\n", i, random1[i]);

	//populate the second array with values in the first in reverse order
	int * r1 = random1 + 9;
	int * r2 = random2;
	for(i = 0; i < 10; i++){
		*r2 = *r1;
		r2++;
		r1--;
	}
	//printf("%p  %p \n", r1, r2);

	//print out second array's values
	printf("Le Copy:\n");
	for(i = 0; i < 10; ++i)
		printf("random2[%d] = %d\n", i, random2[i]);
}
