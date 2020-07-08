#include <stdio.h>
#define LEN 21
#include <string.h>

int main(void)
{
    int ct=0;
    char temp[LEN];
    char smallest_word[LEN];
    char largest_word[LEN];
    printf("enter word (a max of ten letters): ");
    while (scanf("%s", temp)==1)
    {
        if (temp[10]!= '\0')
            goto finish;

        if (ct==0){
            strcpy(smallest_word, temp);
            strcpy(largest_word, temp);
            ct++;
            continue;}

        if (strcmp(smallest_word, temp) > 0)
            strcpy(smallest_word, temp);

        if (strcmp(largest_word, temp) < 0)
            strcpy(largest_word, temp);
        ct++;
    }
    finish:
    if (ct==0)
        puts("done!");
    else fprintf(stdout, "smallest word: %s\nlargest word: %s\ndone!", smallest_word, largest_word);
    return 0;
}
