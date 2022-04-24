#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// #ifdef __cplusplus
// extern "C" {

int main(int argc, char *argv[]){
    // printf("%d\n", argc);
    if (argv[1] == NULL){
        printf("Error: No arguments\n");
        return 1;
    }
    srand(time(NULL));
    int len = atoi(argv[1]);
    // int* vector = calloc(len, sizeof(int));
    int** matrix = calloc(len, sizeof(int*));
    for (int i = 0; i < len; i++){
        matrix[i] = calloc(len, sizeof(int));
    }
    for (int i = 0; i < len; i++){
        for (int j = 0; j < len; j++){
            matrix[i][j] = rand() % 100;
        }
    }
    printf("Matrix: \n");
    for (int i = 0; i < len; i++){
        for (int j = 0; j < len; j++){
            if (matrix[i][j] < 10){
                printf("%d  ", matrix[i][j]);
            }
            else{
                printf("%d ", matrix[i][j]);
            }
            
        }
        printf("\n");
    }
    printf("\n");
    free(matrix);
    return 0;
}
    
// }
// #endif