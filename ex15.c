# include <stdio.h>
int main(int argc, char * argv[])
{
	//create two arrays that we care about 
	int ages[] = {21, 22, 23, 24, 25};
	char * names[] = {"Saurabh", "Shivam", "Muni", "Rohit", "Sud"};
	
	int count = sizeof(ages) /sizeof (int);
	int i = 0;

	//print in the first way using indexing
	for (i = 0; i < count ; i++){
		printf("%s has %d years lived \n", names[i], ages[i]);
	}

	printf("------ \n");

	// setup the pointers to the start of arrays
	int *cur_age = ages;
	char **cur_name = names;

	//second way to print is using pointers
	//
	
	for (i = 0; i < count ; i++){
		printf("%s is %d years old. \n", *(cur_name+i), *(cur_age+i) );
	
	}
	printf("------ \n");

	//third way using pointers as arrays
	
	for (i = 0; i < count ; i++){
		printf("%s is %d years old. \n", cur_name[i], cur_age[i]);
	}

	printf("------ \n");

	for (cur_name = names, cur_age = ages; (cur_age - ages) < count; cur_name++, cur_age++){
		printf ("%s lived %d years so far. \n", *cur_name, *cur_age);
	}
	return 0;
}

