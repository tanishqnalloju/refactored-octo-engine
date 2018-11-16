#include<stdio.h>
#include<string.h>

int main()
{
	FILE *fp;
    char filename[]="1_b.txt",sentence[2000];
    fp=fopen(filename,"a");
    gets(sentence);
   	fprintf(fp,"%s", sentence);
   	fclose(fp);
	return 0;
}