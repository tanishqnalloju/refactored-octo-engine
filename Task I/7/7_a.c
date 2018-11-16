#include <stdio.h>
int main()
{
   char ch;
   FILE *fp;
   if (fp = fopen("7_a.txt", "r"))
   {
     ch = getc(fp);
     while (ch != EOF)
     {
        putc(ch, stdout);
        ch = getc(fp);
     }
     fclose(fp);
     return 0;
   }
   return 1;
}