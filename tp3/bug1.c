#include <stdio.h>
#include <stdlib.h>

void place(int *t, int i, int j)
{
  t[i] =  j;
}


void traitement(int  n)
{
  int *t;
  int i;
  t = (int*) malloc(n * sizeof(int));
  for( i = n-1; i >= 0 ; i--)
    place(t, i, i*i);
  free(t);
}


int main ( int argc, char *argv[] )
{
  int n;

  if (argc == 2) {
    n = atoi(argv[1]);
    printf("bug du -1\n");
    traitement( n );
    printf("done...\n");
  }
  else {
    fprintf(stderr, "%s expects one argument\n", argv[0]);
    exit(EXIT_FAILURE);
  }
  return 0;
}
