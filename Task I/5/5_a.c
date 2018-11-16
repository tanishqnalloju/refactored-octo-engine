#include <stdio.h>

int main ()
{
  int n;
  FILE * p;
  char buffer [27];
  p = fopen ("5_a.txt","w+");
  for ( n='A' ; n<='Z' ; n++)
    fputc ( n, p);
  rewind (p);
  fread(buffer,1,26,p);
  fclose (p);
  buffer[26]='\0';
  puts (buffer);
  return 0;
}