/*
OVERVIEW: Given a string, remove all spaces in it.
E.g.: Input: "abd scd". Output: "abdscd"

INPUTS: A string.

OUTPUT: Return string after removing spaces.

ERROR CASES: Return '\0' for invalid inputs.

NOTES: Don't create new string.
*/

char * removeSpaces(char *str) {
	if (str == "" || str == nullptr)
		return '\0';
		int i,k;
		for (i = 0;str[i]!='\0'; i++)
		{
			while (str[i] == ' ')
			{
				for (k = i; str[k] != '\0'; k++)
					str[k] = str[k + 1];
			}
		}
		str[i] = '\0';
	return str;
}