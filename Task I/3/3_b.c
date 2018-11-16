#include<stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
	FILE *fp;
    char filename[]="alphabet.txt";
    fp=fopen(filename,"a");
    if(!fp)
    {
    	perror("could not find the file");
        exit(0);
    }
    for (char i = 'A'; i <= 'Z'; ++i)
    {
        fprintf(fp, "%c",i );
    }
    fclose ( fp );
    return 0;
}