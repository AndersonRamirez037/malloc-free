#include "main.h"
#include <stdlib.h>
/**
 * _strdup - function that returns a pointer to a newly allocated space in memory, which 
 * contains a copy of the string given as a parameter.
 * @str: pointer with the string to duplicate.
 * Return: the string duplicated. 
 */
char *_strdup(char *str){
    if(str == NULL){
        return NULL; 
    }
    int size_str;
    while(str[size_str] != '\0'){
        size_str++;
    }
    char *copy = malloc((size_str + 1) * sizeof(char));
    for(int i = 0; i < size_str; i++){
        copy[i] = str[i];
    }
    copy[size_str] = '\0'; 
    return copy;
}