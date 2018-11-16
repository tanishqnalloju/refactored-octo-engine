#include <stdio.h>
#include <time.h>

int generateRandomNumber(){
	return rand()%10;
}
int main(int argc, char const *argv[])
{
	srand(time(NULL));
	FILE *fp;
	fp = fopen("randomnum.txt","w+");
	for (int i = 0; i < 10; ++i)
	{
		fprintf(fp, "%d\n",generateRandomNumber());
	}
	fclose(fp);
	return 0;
}