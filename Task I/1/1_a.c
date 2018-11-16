#include<stdio.h>
#include<string.h>

int main()
{
	FILE *fp;
    char filename[]="1_a.txt",line[200],search_string[]="b";
    fp=fopen(filename,"r");
    if(!fp)
    {
    	perror("could not find the file");
        exit(0);
    }
    while ( fgets ( line, 200, fp ) != NULL )
    {
    if(strstr(line,search_string))
    fputs ( "b", stdout ); 
    }
    fclose ( fp );
    return 0;
}