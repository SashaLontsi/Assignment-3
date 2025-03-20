#include <stdio.h>
#include "prime.h"

int isPrime(int num) {
	if (num <= 1) {
		return 0; //not prime
	}
	for (int i = 2; i * i <= num; i++) {
		if (num % i == 0) {
			return 0; //not prime
		}
	}
	return 1; //prime
}