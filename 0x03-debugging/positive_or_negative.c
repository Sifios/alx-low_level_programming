#include  "main.h"

void positive_or_negative(int i)
{
	if (i > 0)
		printf("%xd is positive\n", i);

	else if (i < 0)
		printf("%xd is negative\n", i);

	else
		printf("%xd is zero\n", i);
}
