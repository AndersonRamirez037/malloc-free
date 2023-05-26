#include "main.h"
#include <stdlib.h>
/**
 * str_concat - function that concatenates two strings. 
 * @s1: string number 1 to concatenate.
 * @s2: string number 2 to concatenete.
 * Return: a concatenated string. 
 */
char *str_concat(char *s1, char *s2){
    if(s1 == NULL){
        s1 = ""; 
    }
    if(s2 == NULL){
        s2 = ""; 
    }
    int size_s1 = 0;
    int size_s2 = 0; 
    while(s1[size_s1]){
        size_s1++;
    }
    while(s2[size_s2]){
        size_s2++; 
    }
    char *concatenate = malloc((size_s1 + size_s2 + 1)*sizeof(char));
    if (concatenate == NULL){
        return NULL; 
    }
    int i,j; 
    for(i = 0; i < size_s1; i++){
        concatenate[i] = s1[i]; 
    }
    for(j = 0; j < size_s2; j++){
        concatenate[i + j] = s2[j];
    }
    concatenate[i + j] = '\0'; 
    return concatenate; 
}