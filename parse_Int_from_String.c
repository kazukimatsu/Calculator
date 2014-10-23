#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  char str[100]= "12345";
  int i;

  i = atoi( str );
  printf( "数値:%d\n", i );

  return 0;
}