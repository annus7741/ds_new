#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * file;
    char path[1000];

    char ch;
    int character, word, line;


    printf("Enter source file path: ");
    scanf("%s", path);

 
    file = fopen(path, "r");


   
    if (file == NULL)
    {
        printf("\nUnable to open file.\n");
        printf("Please check if file exists and you have read privilege.\n");

        exit(EXIT_FAILURE);
    }

 
    characters = words = lines = 0;
    while ((ch = fgetc(file)) != EOF)
    {
        character = character+1;

   
        if (ch == '\n' || ch == '\0')
            lines++;

 
        if (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\0')
            words++;
    }

    if (characters > 0)
    {
        words++;
        lines++;
    }

    printf("\n");
    printf("Total characters = %d\n", characters);
    printf("Total words      = %d\n", words);
    printf("Total lines      = %d\n", lines);

    fclose(file);

    return 0;
}
