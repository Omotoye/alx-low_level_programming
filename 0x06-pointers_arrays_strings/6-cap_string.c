#include "main.h"

/**
 * cap_string - capitalize the words of a string
 * @str: (char*) string to be converted
 *
 * @brief A function that converts the first letters of every word in a
 *     string into uppercase
 * Return: (char*) the given string after capitalization
 * @file 6-cap_string.c
 * @author Omotoye Shamsudeen Adekoya
 */

char *cap_string(char *str)
{
	int i = 0;
	int separator_found = 0; /* 0 reps False and 1 reps True */

	while (str != NULL && *(str + i) != '\0')
	{
		switch (*(str + i))
		{
		case 32: /* SPACE */
			separator_found = 1;
			break;
		case 10: /* NEWLINE */
			separator_found = 1;
			break;
		case 9 || 11: /* TAB */
			separator_found = 1;
			break;
		case 44: /* COMMA */
			separator_found = 1;
			break;
		case 59: /* SEMI-COLON */
			separator_found = 1;
			break;
		case 46: /* FULL-STOP */
			separator_found = 1;
			break;
		case 33: /* EXCLAMATION MARK */
			separator_found = 1;
			break;
		case 63: /* QUESTION MARK*/
			separator_found = 1;
			break;
		case 34: /* DOUBLE-QUOTES */
			separator_found = 1;
			break;
		case 40: /* OPEN-BRACKET */
			separator_found = 1;
			break;
		case 41: /* CLOSE-BRACKET */
			separator_found = 1;
			break;
		case 123: /* OPEN-CURLY-BRACKET*/
			separator_found = 1;
			break;
		case 125: /* CLOSE-CURLY-BRACKET */
			separator_found = 1;
			break;
		default:
			separator_found = 0;
			break;
		}

		if (separator_found && *(str + i + 1) > 96 && *(str + i + 1) < 123)
		{
			*(str + i + 1) = *(str + i + 1) - 97 + 65;
		}
		i++;
	}
	return (str);
}
