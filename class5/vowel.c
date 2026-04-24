#include <stdio.h>

int main()
{
	char ch[10];
	scanf("%s", ch);

	int count = 0;

	for(int i = 0; ch[i] !='\0'; i++)
	{	
		if(ch[i] == 'A' || ch[i] == 'E' || ch[i] == 'I' || ch[i] == 'O' || ch[i] == 'U') count++;
	}

	printf("%d vowels\n", count);

}
