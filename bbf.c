//bbf.c
//Created by Camdendev on 11/20/2022

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "bbf.h"

uint8_t cells[65536];
uint8_t cloud;
uint16_t ptr;

void execute(char * program) {
    for(int pc=0;program[pc]!=0;pc++) {
        switch(program[pc]) {
            case '>':
                ++ptr;
                break;
            case '<':
                --ptr;
                break;
            case '+':
                ++cells[ptr];
                break;
            case '-':
                --cells[ptr];
                break;
            case ',':
                cells[ptr] = getchar();
                break;
            case '.':
                putchar(cells[ptr]);
                break;
            case '[':
                printf("the '[' syntax is a WIP\n");
                break;
            case ']':
                printf("the ']' syntax is a WIP\n");
                break;
            case '*':
                cells[ptr] *= cells[ptr+1];
                cells[ptr+1] = 0;
                break;
            case '/':
                cells[ptr] /= floor(cells[ptr+1]);
                cells[ptr+1] = 0;
                break;
            case '~':
                cells[ptr] = 0;
                break;
            case '^':
                cloud = cells[ptr];
                break;
            case 'v':
                cells[ptr] = cloud;
                break;
            case '@':
                ptr = cells[ptr];
                break;
            case '#':
                ptr = 0;
                break;
            case '&':
                printf("%d\n", cells[ptr]);
                break;
            default:
                printf("Invalid Syntax");
        }
    }
}

int main(int argc, char **argv) {
    char input[32768];

    if(argc != 2) {
        printf("Usage: ./better-bf <FILENAME>");
    } else {
        FILE * file = fopen(argv[1], "r");
        if(file != NULL) {
            while(fgets(input, sizeof(input), file) != NULL) {
                execute(input);
            }
        }

        fclose(file);
    }
    return 0;
}