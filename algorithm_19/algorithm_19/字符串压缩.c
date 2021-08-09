#include<stdio.h>
#include<string.h>
int main()
{
	char a[20], b[20] = { 0 };
	int i, j, k, count, n;
	count = 0;
	k = 0;
	scanf("%s", a);
	n = strlen(a);
	for (i = 0; i < n; i++)
	{
		j = i;
		while (a[j] == a[i])
		{
			count++;
			j++;
		}
		if (count > 1)
		{
			b[k] = count + '0';
			b[++k] = a[i];
		}
		else
			b[k] = a[i];
		k++;
		count = 0;
		i = j - 1;
	}
	printf("%s", b);

	return 0;
}