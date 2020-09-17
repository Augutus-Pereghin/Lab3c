// Author: Augustus Perseghin agp5191
// Collaborator:
// Collaborator:
// Collaborator:
// Section: 4
// Breakout: 15

#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int sum_n(int);
void print_n(char*,int);

int main(void) {
  int n_in = 0;
  char* s_in = 0;
  n_in = atof(readline("Enter an int: "));
  printf("sum is %i.\n",sum_n(n_in));
  s_in = readline("Enter a string: ");
  print_n(s_in, n_in);
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
    printf("%s\n", s);
    print_n(s,n-1);
  }
  return;
}