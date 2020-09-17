// Author: Yanling Wang yuw17@psu.edu
// Collaborator:
// Collaborator:
// Collaborator:
// Section: 1
// Breakout: 12

#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int sum_n(int);

int main(void) {
  int n = 0;
  n = atof(readline("Enter an int: "));
  printf("sum is %i.",sum_n(n));
  return 0;
}

int sum_n(int num)
{
  int answer = 0;
   if(num > 0)
   {answer = num + sum_n(num-1);}
  return answer;
}

void print_n(char* s, int n)
{
  if(n > 0)
  {
    printf("%s", s);
    print_n(s,n-1);
  }
  return;
}