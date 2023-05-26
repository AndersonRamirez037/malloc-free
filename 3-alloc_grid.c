#include "main.h"
#include <stdlib.h>
/**
 *
 *
 *
 */
int **alloc_grid(int width, int height){
    if(width <= 0 || height <= 0){
        return NULL;
    }
    int **grid = malloc(height * sizeof(int *));
    if (grid == NULL) {
        return NULL;
    }

    for (int i = 0; i < height; i++) {
        grid[i] = calloc(width, sizeof(int));
        if (grid[i] == NULL) {
            free(grid);
            return NULL;
        }
    }

    return grid; 
}