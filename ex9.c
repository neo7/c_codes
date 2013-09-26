# include <stdio.h>
int main(int argc, char *argv[])
{
	int numbers[4] = {0};
	char name[4] = {'a'};

	printf ("numbers: %d %d %d %d \n ", numbers[0], numbers[1], numbers[2], numbers[3]);
	printf ("name each: %c %c %c %c \n ", name[0], name[1], name[2], name[3]);
	printf ("name: %s\n ", name);

	//setting up the number 
	numbers[0]=0;
	numbers[1] = 1;
	numbers[2] = 2;
	numbers[3] = 3;
	

	//setting up the names
	
	name[0] = 'a';
	name[1] = 'b';
	name[2] = 'c';
	name[3] = '\n';
	
	// printing initialized
	//
			
	printf ("numbers: %d %d %d %d \n ", numbers[0], numbers[1], numbers[2], numbers[3]);
	printf ("name each: %c %c %c %c \n ", name[0], name[1], name[2], name[3]);
	printf ("name: %s\n ", name);

	char *another = "Saurabh";
	printf ("name: %s\n ", another);
	printf ("name each: %c %c %c %c \n ", another[0], another[1], another[2], another[3]);

	return 0;
}
	
