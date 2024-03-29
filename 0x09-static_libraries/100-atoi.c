/**
 * _atoi - converts string to integer
 * @s: string to convert
 * Return: integer value
 */

int _atoi(char *s)
{
	int i, sign = 1, flag = 0, number;
	unsigned int result = 0;

	for (i = 0;  s[i] != '\0' && flag != 2; i++)
	{
		if (s[i] == '-')
			sign *= -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			flag = 1;
			result *= 10;
			result += (s[i] - '0');
		}
		else if (flag == 1)
			flag = 2;
	}

	if (sign == -1)
		number = -result;
	else
		number = result;

	return (number);
}
