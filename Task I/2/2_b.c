#include<stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    int n = 0;
	FILE *fp;
    char filename[]="2_b.txt",line[200];
    fp=fopen(filename,"r");
    if(!fp)
    {
    	perror("could not find the file");
        exit(0);
    }
    while ( fgets ( line, 200, fp ) != NULL )
    {
    for (int i = 0; i < strlen(line); ++i)
    {
        if (line[i] == '$')
            n++;
    }
    }
    fclose (fp);
    printf("%d\n", n);
    return 0;
}