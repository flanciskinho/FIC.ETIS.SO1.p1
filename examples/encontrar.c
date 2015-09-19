#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAXLINE 1000

int get_line(char *line, int lim);
int position(char *s, char *t);

/* find all lines matching a pattern */

int main(void)
{
	char line[MAXLINE];

	while (get_line(line, MAXLINE) > 0)
		if (position(line, "the") >= 0)
			printf("%s", line);

	exit(0);
}

int get_line(char *s, int lim)
{
	int c;
	int i = 0;

	while (--lim > 0 && ((c = getchar()) != EOF) && (c != '\n'))
        s[i++]	= c;
    
    if (i == 0)
        return -1;

	if (c == '\n')
		s[i++] = c;
	s[i] = '\0';

	return i;
}

int position(char s[], char t[])
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++) {
		for (j = 0; (t[j] != '\0') && (s[i + j] == t[j]); j++) ;
		if (t[j] == '\0')
			return i;
	}

	return (-1);
}
