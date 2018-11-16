#include<stdio.h>
#include<string.h>

int main()
{
    int size;
	FILE *fp;
    char filename[]="2_a.txt",line[200];
    fp=fopen(filename,"r");
    if(!fp)
    {
    	perror("could not find the file");
        exit(0);
    }
    fseek(fp, 0, 2);    /* file pointer at the end of file */
    size = ftell(fp);   /* take a position of file pointer un size variable */
    printf("The size of given file is : %d\n", size);    
    fclose(fp);
    return 0;
}