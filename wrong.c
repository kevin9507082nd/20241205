#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cool_word(char *word)
{
    int freq[26] = {0};
    int used_freq[35]={0};
    int letter = 0;
    for (int i = 0; word[i]; i++)
    {
        int idk = word[i] - 'a';
        
        if (freq[idk]==0)
        {
            letter++;
        }
        freq[idk]++;
    }

    if (letter < 2)
        return 0;

    for (int i = 0; i < 26; i++)
    {
        if (freq[i]>0)
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
    char word[40];
    int count = 1;
    int word_s = 0;
    char recode[40];

    while (scanf("%d", &n) != EOF)
    {
        word_s = 0;
        
        for (int i = 0; i < n; i++)
        {
            scanf("%s", word);
            if (cool_word(word))
            {
                word_s++;
                recode[word_s] = word[word_s];
            }
        }
        printf("Case %d: %d\n", count++, word_s);
        for (int i = 0; i < word_s; i++)
        {
            printf("%c", recode[i]);
        }
        printf("\n");
    }
    return 0;
}
