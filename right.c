#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int cool_word(char *word)
{
    int freq[26] = {0};
    int used_freq[10000] = {0};  // More room for safety
    int letter = 0;

    for (int i = 0; word[i]; i++)
    {
        if (!islower(word[i])) // Ensure character is lowercase a-z
            return 0;

        int idx = word[i] - 'a';

        if (freq[idx] == 0)
            letter++;

        freq[idx]++;
    }

    if (letter < 2)
        return 0;

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > 0)
        {
            if (used_freq[freq[i]])
                return 0;
            used_freq[freq[i]] = 1;
        }
    }

    return 1;
}

int main()
{
    int n;
    char word[10000];
    int count = 1;
    char recode[10000][1000]; // Store up to 40 cool words, each up to 39 chars
    int word_s;

    while (scanf("%d", &n) != EOF)
    {
        word_s = 0;

        for (int i = 0; i < n; i++)
        {
            scanf("%s", word);
            if (cool_word(word))
            {
                strcpy(recode[word_s], word);
                word_s++;
            }
        }

        printf("Case %d: %d\n", count++, word_s);

        for (int i = 0; i < word_s; i++)
        {
            printf("%s\n", recode[i]); // Print each word on a new line
        }
    }

    return 0;
}
