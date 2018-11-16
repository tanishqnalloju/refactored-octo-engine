#include <stdio.h> 
#include <stdlib.h>

int main() 
{ 
    FILE *fp1,*fp2; 
    char filename[100], c; 
    scanf("%s", filename); 
    fp1 = fopen(filename, "r"); 
    if (fp1 == NULL) 
    { 
        printf("Cannot open file %s \n", filename); 
        exit(0); 
    } 
    scanf("%s", filename); 
    fp2 = fopen(filename, "w"); 
    if (fp2 == NULL) 
    { 
        printf("Cannot open file %s \n", filename); 
        exit(0); 
    } 
    c = fgetc(fp1); 
    while (c != EOF) 
    { 
        fputc(c, fp2); 
        c = fgetc(fp1); 
    }
    fclose(fp1); 
    fclose(fp2); 
    return 0; 
}