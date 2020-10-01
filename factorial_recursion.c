#include <stdio.h> 

int factorial(int num) {

  if(num <= 1) {
    return 1;
  }
  
  return num * factorial(num-1);
}

int main() { 
  
  int num, result;
  printf("Insert the number:\n ");
  scanf("%d", &num);
  result = factorial(num);
  printf("Factorial of num is %d", result);
	return 0; 
}

