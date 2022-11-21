//bf.c
//Created by Camdendev on 11/20/2022

/*
Info
----
Better Brainf*** (BBf) is a brainfuck derivative with additonal syntax.
These addition syntax should allow for cleaner and slightly more readable code.
BBf has an array of 65536 cells, each cell can have a value of 0-255.
The '[' and ']' syntax have been excluded.

Brainf*** Syntax
-----------------
> | Move pointer to the right
< | Move pointer to the left
+ | Increment current cell value by 1
- | Decrement current cell value by 1
, | Set current cell value equal to user input as 8 bit int
. | Output current cell value as ASCII
[ | TO-DO
] | TO-DO

New BBf Syntax
---------------
* | Multiply current cell value by itself and next cell value then set next cell to 0
/ | Divide current cell value by itself and next cell value then set next cell to 0 (rounds down)
~ | Set current cell to 0
^ | Copy current cell value
v | Paste current cell value
@ | Jump to cell equal to current cell value
# | Jump to cell 0
& | Output current cell value as integer
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bf.h"

uint8_t cells[65536];
uint8_t cloud;
uint16_t ptr;

void execute(char * program) {
    for(int i=0;program[i]!=0;i++) {
        switch(program[i]) {
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
                break;
            case ']':
                break;
            case '*':
                cells[ptr] *= cells[ptr+1];
                cells[ptr+1] = 0;
                break;
            case '/':
                cells[ptr] /= cells[ptr+1];
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

int main(void) {
    char * input = ">>+++++<<++@&";

    execute(input);

    return 0;
}