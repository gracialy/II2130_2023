#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool strings_not_equal(char* input, char answer[]){
    return strcmp(input, answer);
}

void Beginning(char* input){
    if(strings_not_equal(input, "Welcome to the melty land, this is a place where only beautiful dreams remain")){
        illegal_move();
    }
}