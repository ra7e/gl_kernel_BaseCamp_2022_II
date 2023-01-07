// SPDX-License-Identifier: BSD-3-Clause
// Copyright (c) 2022. All rights reserved.

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

#define LOWER 0
#define UPPER 9

uint8_t generateRandomNumber(int lower, int upper)
{
	uint8_t r = rand() % (upper - lower + 1) + lower;
	printf("%d",r); 
	return r;
}

int main(int argc, char **argv)
{
	uint8_t userNumber = 0;

	if (argc < 2){
		printf("Please gimme a number in range [0-9]");
		scanf("%hhd", &userNumber);
	}else
		userNumber = atoi(argv[1]); 
	
	if (userNumber < 0 || userNumber > 9) {
		printf("Value is not correct. Leaving\n");
		return -1;
	}

	if (userNumber == generateRandomNumber(LOWER, UPPER)) {
		printf("You win!\n");
	} else {
		printf("You lose\n");
		return -1;
	}

	return 0;
}

