#include <stdio.h>
/**
 *main- program point of entry
 *Reeturn:0 if no error, non zero if error
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
