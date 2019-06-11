#include "stdio.h"
#include "stdlib.h"

int main(int argc, char* argv[])
{
  char *p;
  int i;

  if(argc != 2) return -1;
  long n = strtol(argv[1], &p, 10);

  printf("%d=", n);
  for(i=2;i<=n;i++)
    while(n!=i)
    {
      if(n%i==0)
      {
        printf("%d*",i);
        n=n/i;
      }
      else
        break;
    }
  printf("%d", n);
  return 0;
}
