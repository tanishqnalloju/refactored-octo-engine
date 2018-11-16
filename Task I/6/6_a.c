#include <stdio.h>
#include <string.h> 
#include <stdlib.h>

int arr[1001]={0};
int j = 0;
int main() 
{ 
    FILE *fp; 
    char filename[100], c[1000]; 
    scanf("%s", filename); 
    fp = fopen(filename, "r"); 
    if (fp == NULL) 
    { 
        printf("Cannot open file %s \n", filename); 
        exit(0); 
    }  
    while ( fgets (c, 1000, fp) != NULL )
    {
        for (int i = 0; i < strlen(c); ++i)
         {
             if(c[i] >= '0' && c[i] <= '9'){
                arr[j]=c[i] - '0';
                j++;
            }
         }
    }
    fclose(fp);
    for (int i = 0; i < j; ++i)
    {
        printf("%d\n", arr[i]);
    }
    return 0; 
}