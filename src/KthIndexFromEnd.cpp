/*
OVERVIEW: Given a string, return the letter at Kth index from the end of the string.
E.g.: Input: "qwertyui", 3. Output: 't' (index starting from zero).

INPUTS: A string and value of K.

OUTPUT: Return the letter at Kth index from the end of the string (index starting from zero).

ERROR CASES: Return '\0' for invalid inputs.

NOTES:
*/

char KthIndexFromEnd(char *str, int K) {
	if(K<0) return '\0';
	if (str==""||str==nullptr ) return '\0';
	int i, len = 0;
	for (i = 0; str[i] != '\0'; i++)
		len++;
	if (K == 0) return str[len-1];
	if (K == len - 1) return str[0];
	if (K >= len) return '\0';
	for (i = len - 1; i >= 0 && K != 0; i--)
		K--;
	return str[i];
}