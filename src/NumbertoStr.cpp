/*/
OVERVIEW: Given a float number ,Convert it into a string 

INPUTS: A Float,Final string ,How many digits after decimal has to be displayed .
Its zero for integers.


OUTPUT: No need to output anything ,Modify the str in function parameter such that it
now holds the string format of the float number specified

Example : number_to_str(345,str,0);
Should copy "345\0" in the str;
number_to_str(345.342,str,2);
Should copy "345.34" in the str;

NOTES: Don't create new string.

*/

#include <stdio.h>


void number_to_str(float number, char *str,int afterdecimal){
	int i, rem, r = 0, k = 1, c = 0, r1, n, flag = 0, f1 = 0, j, f2;
	float  fpart, f = 0;
	if (afterdecimal == 0)
	{
		n = number;
		if (n<0)
		{
			str[0] = '-';
			n = n*-1;
			flag = 1;
		}
		while (n != 0)
		{
			rem = n % 10;
			r = r * 10 + rem;
			n = n / 10;
			c++;
		}
		for (i = flag; i < c + flag; i++)
		{
			r1 = r % 10;
			str[i] = r1 + '0';
			r = r / 10;
		}
		str[i] = '\0';
	}
	else
	{
		n = (int)number;
		fpart = number - (float)n;
		for (i = 0; i<afterdecimal; i++)
			k = k * 10;
		f = fpart*k;
		f2 = (int)f;
		if (f2<0)  f2 = f2*-1;
		if (n<0)
		{
			str[0] = '-';
			n = n*-1;
			flag = 1;
		}
		while (n != 0)
		{
			rem = n % 10;
			r = r * 10 + rem;
			n = n / 10;
			c++;
		}
		for (i = flag; i < c + flag; i++)
		{
			r1 = r % 10;
			str[i] = r1 + '0';
			r = r / 10;
		}
		str[i] = '.';
		while (f2 != 0)
		{
			rem = f2 % 10;
			f1 = f1 * 10 + rem;
			f2 = f2 / 10;
			c++;
		}
		j = i + 1;
		while (afterdecimal != 0)
		{
			r1 = f1 % 10;
			str[j] = r1 + '0';
			f1 = f1 / 10;
			afterdecimal--;
			j++;
		}
		str[j] = '\0';
	}
}
