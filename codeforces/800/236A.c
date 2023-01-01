#include <stdio.h>
#include <string.h>

int main()
{
	char user[101];
	scanf("%s", user);
	
	int i, len = strlen(user), count = 0;
	for (i = 0; i < len; i++)
	{
		int j;
		for (j = 0; j < i; j++)
		{
			if (user[i] == user[j])
				break;
		}
		if (i == j)
			count++;
	}
	
	if (count % 2 == 1)
		printf("IGNORE HIM!");
	else
		printf("CHAT WITH HER!");
	
	return 0;
}