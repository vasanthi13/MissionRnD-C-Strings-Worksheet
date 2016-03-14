/*
OVERVIEW: Given two strings, find the words that are common to both the strings.
E.g.: Input: "one two three", "two three five".  Output: "two", "three".

INPUTS: Two strings.

OUTPUT: common words in two given strings, return 2D array of strings.

ERROR CASES: Return NULL for invalid inputs.

NOTES: If there are no common words return NULL.
*/

#include <stdio.h>

#include <malloc.h>

#define SIZE 31

char ** commonWords(char *str1, char *str2) {
	if (str1 == "" || str1 == nullptr) 
		return NULL;
	if (str2 == "" || str2 == nullptr)
		return NULL;
	int i = 0, j, len = 0, t = 0, len1 = 0, k = 0, len2 = 0, m, l, c = 0,t1=0,t2=0;
	char ** s1;
	char *s2;
	s1 = (char **)malloc(sizeof(char *)*SIZE*SIZE);
/*	for (i = 0; i < SIZE; i++)
	{
		for (j = 0; j < SIZE; j++)
			s1[i][j] = '\0';
	}*/
	for (j = 0; str2[j] != '\0'; j++)
		len2++;
	for (j = 0; str1[j] != '\0'; j++)
		len++;
	for (t = 0; t<len; t++)
	{
		if (str1[t] != ' ')
		{
			len1 = 0;
			m = t;
			for (i = t; str1[i] != ' '&&str1[i] != '\0'; i++)
				len1++;
			s2 = (char *)malloc(sizeof(char)*len1);
			for (j = 0; j < len1; j++)
			{
				s2[j] = str1[m];
				m++;
			}
			s2[j] = '\0';
			for (l = 0; l <= len2 - len1; l++)
			{
				j = 0;
				while (j < len1&&str2[l + j] == s2[j])
				{
					j++;
				}
				if (len1 == j)
				{
					s1[t1] = s2;
					s1[t1][len1] = '\0';
					t1++;
					c++;
				}
			}
			t = t + len1;
		}

	}

	if (c == 0) return NULL;
	else
		return s1;
}