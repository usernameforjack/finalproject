#include <stdio.h>
#include <string.h>


char alpha[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
char morse[26][5] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};



char main(char argc, char* argv[])

{

for ( int i = 0; i < 26; i++)
{
	printf("%c\n", alpha[i]);
}


for ( int i = 0; i < 26; i++)
        {
                for (int j = 0; j < 5; j++)
		{
			printf("%c", morse[i][j]);
        	}

		printf("\n");


	}
printf("high\n");

char encoded[100][100];


for (int j = 0; message[j] != '\0'; j++)
{
	for (int i = 0; i < 26; i++)
	{
		if (alpha[i] == message[j])
		{
			for (int k = 0; k < 5; k++)
			{
				encoded[j][k] = morse[i][k];
			}
		}
	}

}


for (int i = 0; i < 100; i++)
{
	if (message[i] == '\0')
	{
		encoded[i][0] = 'e';
	}
}


for (int j = 0; encoded[j][0] != 'e'; j++)
{
	for (int i = 0; i < 5; i++)
	{
	printf("%c",encoded[j][i]);
	}
}



}
