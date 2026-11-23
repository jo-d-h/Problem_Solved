#include <stdio.h>
#include <string.h>
#pragma warning (disable:4996)

int main()
{
	char word[101] = {};
	int count = 0;

	scanf("%s", word);

	for (int i = 0; i < strlen(word); i++)
	{
		count++;

        if (word[i] == 'c') //c= or c-
        {
            if (word[i + 1] == '=' || word[i + 1] == '-') 
                i++;
        }
        else if (word[i] == 'd') 
        {
            if (word[i + 1] == 'z' && word[i + 2] == '=') //dz=
                i += 2;
            else if (word[i + 1] == '-') //d-
                i++;
        }
        else if (word[i] == 'l' && word[i + 1] == 'j')  //lj
            i++;
        else if (word[i] == 'n' && word[i + 1] == 'j') //nj
            i++;
        else if (word[i] == 's' && word[i + 1] == '=') //s=
            i++;
        else if (word[i] == 'z' && word[i + 1] == '=') //z=
            i++;
	}

	printf("%d", count);
	return 0;
}