#include "stdio.h"

int main()
{
	int	A;
	int	l;
	int	r;
	int	n;
	int	k;
	int	count;
	int	dif;
	int	diff;
	int	q;

	//присвоим значения
	count = 0;
	n = 0;
	l = 0;
	q = 0;
	k = 1;

	scanf("%d", &A);
	r = A;
	dif = A;
	
	while (A)
	{
		A /= 3;
		n++;
 count++;
	}

	for (int i = 0; i < n+1; i++)
	{
		dif -= k;
		k *= 3;
	}
	k = 1;
	dif *= -1;
	count = 0;
	while (dif)
	{
		diff = dif % 3;
		dif /= 3;
		if (diff == 0) 
		{
			l += k;
			count++;
		}
		else
		{
			if (diff == 2) 
			{
				count++;
				r += k;
			}
		}
		q++;
		k *= 3;
	}
	count += n + 1 - q;
	
	for (int i = 0; i <= (n - q); i++)
	{
		l += k;
		k *= 3;
	}
	
	if (l > 1000000 || r > 1000000)
		printf("-1");
	else
		printf("%d", count);

	return 0;
}
