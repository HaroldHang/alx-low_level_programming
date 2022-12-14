#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int word_len(char *str);
int count_words (char *str);
/**
 * word_len - Locates the index marking the end of the
 *            first word contained within a string.
 * @str: The string to be searched.
 *
 * Return: The index marking the end of the initial word pointed to by str.
 */
int word_len(char *str)
{
int index = 0, len = 0;
while (*(str + index) && *(str + index) != ' ')
{
len++;
index++;
}
return (len);
}

/**
 * count_words - Counts the number of words contained within a string.
 * @str: The string to be searched.
 *
 * Return: The number of words contained within str.
 */
int count_words(char *str)
{
int index = 0, words = 0, len = 0;
for (index = 0; *(str + index); index++)
len++;
for (index = 0; index < len; index++)
{
if (*(str + index) != ' ')
{
words++;
index += word_len(str + index);
}
}
return (words);
}



/**
 * strtow - split string
 * @str: the string to split
 *
 * Return: pointer to argument string
 */
char **strtow(char *str)
{
char *s;
int i = 0, words, w, letters, l;
if (str == NULL || str[0] == '\0')
{
return (NULL);
}
words = count_words(str);
s = malloc(sizeof(char *) * (words + 1));
if (s == NULL)
{
return (NULL);
}
for (w = 0; w < words; w++)
{
while (str[i] == ' ')
{
i++;
}
letters = word_len(str + i);
s[w] = malloc(sizeof(char) * (letters + 1));
if (s[w] == NULL)
{
for (; w >= 0; w--)
free(strings[w]);

free(strings);
return (NULL);
}
for (l = 0; l < letters; l++)
{
s[w][l] = str[i++];
}
s[w][l] = '\0';
}
s[w] = NULL;
return (s);
}
