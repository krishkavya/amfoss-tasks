#include<stdio.h>
#include<cs50.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

int main(int argc,string argv[])
{
    if(argc==2)
    {
        for(int i=0;i<strlen(argv[1]);i++)
        {
            if(isdigit(argv[1][i])==false)
            {   
                printf("Usage: ./caesar key");
                return 1;
            }
        }
        int k=atoi(argv[1]);
        string plaintext = get_string("plaintext: ");
        printf("ciphertext: ");
        for(int i=0;i<strlen(plaintext);i++)
        {
            if(plaintext[i]>='a' && plaintext[i]<='z')
            {
                printf("%c", ((((plaintext[i] - 'a') + k) % 26) + 'a'));
            }
            else if (plaintext[i] >= 'A' && plaintext[i] <= 'Z')
            {
                printf("%c", ((((plaintext[i] - 'A') + k) % 26) + 'A'));
            }
             else
            {
                printf("%c", plaintext[i]);
            }
        }
        printf("/n");
        return 0;
    }
    else
    {
       printf("Usage: ./caesar key\n"); 
       return 1;  
    }
}
