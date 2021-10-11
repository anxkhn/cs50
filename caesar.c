#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <cs50.h>

 int main(int argc, string argv[])
{
    int key = 0;
    for (int i = 0; i < strlen(argv[1]); i ++)
    {

        if (isalpha(argv[1][i]))
        {
            printf ("Enter a valid input.\n");
            return 1;
        }
    }
    int k = atoi(argv[1]);
    if (argc != 2 || k < 0)
    {
        printf("Enter a valid input.\n");
        return 1;
    }
    else
    {
        // convert key to integer then store the key
    key = atoi(argv[1])%26;
    }
    string word = get_string("plaintext:  ");
    int len = strlen(word);

    for (int j = 0; j < len; j++)
    {
        // Detection and crypting of words
        int x = word[j] ;
        if (x <= 'Z' && x >= 'A')
        {
            x = x + key ;
            if (x > 'Z')
            {
                x = x - 26 ;
            }
        }
        if (x <= 'z' && x >= 'a')
        {
            x = x + key ;
            if (x > 122 )
            {
                x = x - 26 ;
            }
        }
        word[j] = x ;
    }
    printf("ciphertext: %s\n", word);
}