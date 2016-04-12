#include<stdio.h>
int main(int argc, int *argv[])
{
	if(argc != 2)
	{
		printf("usage: %s filename",argv[0]);
	}
	else
	{
		FILE *file = fopen(argv[1],"r");
		if(file ==0)
		{
			printf("Couldn't Open File\n");
		}
		else
		{
			int x;
			while((x=fgetc(file)) != EOF)
			{
				printf("%c",x);
			}
			fclose(file);
		}
	}
	return 0;
}
