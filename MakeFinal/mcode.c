#include <stdio.h>
#include <string.h>


char alpha[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
char morse[26][5] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};



int pagemorse(int argc, char* argv[])
{

 if (argc != 2)
  {
    printf("%s : expected 1 message, please enter one message\n", argv[0]);
    return 1;
  }


char message[strlen(argv[1])];

strcpy(message, argv[1]);

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
	printf(" ");
}



}


