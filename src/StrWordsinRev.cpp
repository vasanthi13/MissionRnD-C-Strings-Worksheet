/*
OVERVIEW: Given a string, reverse all the words not the string.

E.g.: Input: "i like coding". Output: "coding like i"

INPUTS: A string.

OUTPUT: Modify the string according to the logic.

NOTES: Don't create new string.
*/
#include <Stdio.h>
#include <string.h>

void str_words_in_rev(char *input, int len){
	int  z = 0, t, i, j, k1, c, c1, l1, l2, k, l, t1;
	for (i = 0; i < len; i++)
	{
		if (input[i] == ' ')
			z++;
	}
	if (z != 0)
	{
		t = len - 1;
		while (1)
		{
			l1 = 0;
			for (i = t; input[i] != ' '; i--)
				l1++;
			t1 = i;
			c = 0;
			while (input[i] == ' ')
			{
				c++;
				i--;
			}
			l2 = 0;
			for (j = i; input[j] != ' '&&j >= 0; j--)
				l2++;
			k1 = j;
			k = len;
				c1 = c;
				while (c != 0)
				{
					input[k] = ' ';
					c--;
					k++;
				}
			for (k = len + c1; input[j + 1] != ' '; k++)
			{
				input[k] = input[j + 1];
				j++;
			}
			input[k] = '\0';
			for (l = k1 + 1; input[l] != '\0'; l++)
			{
				input[l] = input[t1 + 1];
				t1++;
			}
			input[len] = '\0';
			t = k1;
			if (k1 == -1 || i == 0)
			{
				break;
			}
		}
	}
}
