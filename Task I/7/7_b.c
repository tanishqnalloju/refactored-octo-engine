#include <stdlib.h>
#include <stdio.h>

int main()
{
    int n = 0;
	FILE *fp;
    char filename[]="7_b.txt",line[200];
    fp=fopen(filename,"r");
    if(!fp)
    {
    	perror("could not find the file");
        exit(0);
    }
    while ( fgets ( line, 200, fp ) != NULL )
    {
        fputs(line,stdout);
    }
    fclose(fp);
    return 0;
}