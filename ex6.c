# include <stdio.h>
 
int main(int argc, char *argv[])
{
	int distance = 100;
	float power = 2.345f;
	double super_power = 56789.4532;
	char initial = 'A';
	char first_name[] = "Saurabh";
	char last_name[] = "Tiwari";
	printf("You are %d miles away. \n", distance);
	printf("You have %f levels of super power. \n", power);
	printf("You have %f levels of aweseme super power. \n", super_power);
	printf("I have an initial - %c. \n", initial);
	printf("I havea first name %s. \n", first_name);
	printf("I havea a last name %s. \n", last_name);
	printf("My full name is %s %c %s. \n", first_name, initial, last_name);
	
	return 0;
}
