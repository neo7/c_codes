# include <stdio.h>
int main(int argc, char *argv[])
{
	if (argc != 2) {
		printf("ERROR: You need one argument \n");
		// this is how you abort the program
		return 1;
	}

	int i = 0; 
	for (i = 0; i< argv[1][i] != '\0'; i++){
		char letter = argv[1][i];
		int letter_value = letter;
		if (letter_value >= 65 && letter_value <= 90){
			letter = letter_value + 32;
		}

		switch(letter) {
			case 'a':
				printf("%d: 'A' \n", i);
				break;
			case 'e':
				printf("%d: 'E' \n", i);
				break;
			case 'i':
				printf("%d: 'I' \n", i);
				break;

			case 'o':
				printf("%d: 'O' \n", i);
				break;

			case 'u':
				printf("%d: 'U' \n", i);
				break;
			
			default:
				printf("%d: %c 	is not a vowel. \n ", i, letter);

		}
	}
	return 0;
}

