#include<stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    int n = 0;
	FILE *fp;
    char filename[]="myfile.txt",line[200];
    fp=fopen(filename,"r");
    if(!fp)
    {
    	perror("could not find the file");
        exit(0);
    }
    while ( fgets ( line, 200, fp ) != NULL )
    {
        if (strlen(line) == 100 ){
            printf("%s\n", line);
            break;
        }
        else{
            printf("%s\n", line);
            break;
        }
    }
    fclose (fp);
    return 0;
}