#include<stdio.h>
int main(int argc, char *argv[])
{
	int i = 0;

	if (argc == 1)
	{
		printf("You have only one Argument. You such \n");
	} else if(argc > 1 && argc < 4){
		printf("Here are your argument \n");

		for (i = 0; i < argc; i++)
		{
			printf("%s", argv[i]);

		}
		printf("\n");
	} else {
		printf("You have too many arguments. you suck. \n");
	}

	return 0;
}
