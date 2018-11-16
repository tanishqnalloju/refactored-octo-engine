#include<stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
	FILE *fp;
    char filename[]="mylog.txt";
    fp=fopen(filename,"a");
    if(!fp)
    {
    	perror("could not find the file");
        exit(0);
    }
    char log[10001];
    scanf("%s",log);
    fprintf(fp,"%s\n",log);
    fclose (fp);
    return 0;
}