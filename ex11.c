#include<stdio.h>
int main(int argc, char *argv[])
{
	int i =0;
	// go through each string in argv
	while (i < argc)
	{
		printf("arg %d: %s. \n", i, argv[i]);
		i++;
	}
	// own array of string.
	char * states[] = {"Uttar Pradesh", "Maharashtra ", "Karnataka", "Kerela", "Kashmir"};
	int num_states = 5; 
	i=0;
	while(i<num_states)
	{
		printf("State %d: %s. \n",i,states[i] );
		i++;
	}

	return 0;
}
