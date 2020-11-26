#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<math.h>

int main(void)
{
    string text = get_string("Text : ");
    int l = 0;
    int w = 1;
    int s = 0;
     for (int i = 0 ; i < strlen(text) ; i++)
    {
        if ((text[i] >= 'a' || text[i] >= 'A' ) && (text[i] <= 'z' || text[i] <=' Z'))
        {
            l++;
        }
        else if (text[i] == ' ')
        {
            w++;
        }
        else if (text[i] == '!' || text[i] == '.' || text[i] == '?')
        {
            s++;
        }
    } 
    float grade = 0.0588 * (100 * (float) l / (float) w) - 0.296 * (100 * (float) s / (float) w) - 15.8;
    if (grade > 16)
    {
        printf("Grade 16+\n");
    }
    else if (grade < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %i\n", (int) round(grade));
    }
    
}
