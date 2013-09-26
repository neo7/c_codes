# include <stdio.h>

int main(int argc, char *argv[])
{
	int areas[] = {10, 12, 13, 14, 20};
	char name[] = {"Saurabh"};
	char full_name[] = {'S','a', 'u', 'r', 'a', 'b', 'h', 'A', 'T', 'i', 'w', 'a', 'r', 'i', '\0'};
	
	printf("The size of an int : %ld. \n ", sizeof(int));
	printf("The size of ints in area : %ld. \n ", sizeof(areas));
	printf("The size number of ints in areas is %d. \n", sizeof(areas)/sizeof(int));
	printf("The first area is %d and 2nd area is %d. \n", areas[0], areas[1]);
	printf("The size of char is %d. \n", sizeof(char));
	printf("The size of name char [] array is %ld.\n", sizeof(name));
	printf("The number of characters in name array is %ld. \n", sizeof(name)/sizeof(char));
	printf("The size of full_name char [] array is %ld.\n", sizeof(full_name));
	printf("The number of characters in full_name array is %ld. \n", sizeof(full_name)/sizeof(char));
	printf("Name=\"%s\" and full name = \"%s\". \n", name, full_name);
	
	return 0;
}
