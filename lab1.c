/*
 * Implement your solution in thi file
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <tgmath.h>
#include "lab1.h"

char* readString(char* fileName){
    FILE *fp = fopen(fileName, "r");
    char *buffer = calloc(MAX_LINE_LEN, sizeof(char));
    fgets(buffer, MAX_LINE_LEN, fp);
    // printf("%s\n", buffer);
    buffer[strcspn(buffer, "\n")] = 0;
    printf("%s\n", buffer);
    fclose(fp);

    return buffer;
}
int summ(const char *str)
{
    int n = strlen(str);
    int size = (pow(n, 2) + n) / 2;
    return size;
}
char *mysteryExplode(const char *str)
{
    int size = summ(str);

    char *buffer = calloc(size, sizeof(char));
    char *temp = calloc(size, sizeof(char));

    for (int i = 0; i < strlen(str); i++){
        for (int j = 0; j < i + 1; j++) {
            temp[j] = str[j];
        }
        strcat(buffer, temp);
    }

    free(temp);

    return buffer;
}
