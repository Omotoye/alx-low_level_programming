/**
 * _isupper - checks for upper character
 * @c: (int) ASCII value of the character to be
 *     checked.
 *
 * @brief A function that takes in the ASCII value of
 *     character and checks if that character is an uppercase
 *     character.
 * Return: (void)
 * @file 0-isupper.c
 * @author Omotoye Shamsudeen Adekoya
 */
int _isupper(int c)
{
	if ((c > 64) && (c < 91))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
