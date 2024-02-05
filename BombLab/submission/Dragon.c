#include <stdio.h>

void Dragon(char* input){
    int dragon[15] = {9, 4, 3, 0, 11, 2, 5, 14, 1, 10, 8, 15, 6, 7, 12, 13};
    
    int input_1, input_2;
    int scan = sscanf(input, "%d %d", &input_1, &input_2);
    if (scan <= 1){
        illegal_move();
    }

    int value = dragon[input_1];
    int sum = 0; int i=0; 
    while (i<15){
        sum += value;
        value = dragon[value];
        i++;
    }
    
    if (value != 15){
        illegal_move();
    }
    
    if (sum != 107){
        illegal_move();
    }
}