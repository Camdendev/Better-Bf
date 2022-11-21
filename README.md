# Better-Bf
Brainfuck with more syntax

Info
-
Better Brainfuck (also called Better-Bf) is a Brainfuck derivative with additonal syntax allowing for slighty cleaner and more readable code. Better-Bf is a cell-based esoteric language with 65536 cells that can hold a max value of 255. Better-Bf also has a single unsigned 8 bit "cloud cell".

| Brainfuck Syntax | Description |
| --- | --- |
| > | Move pointer to the right |
| < | Move pointer to the left |
| + | Increment current cell value by 1 |
| - | Decrement current cell value by 1 |
| , | Set current cell value equal to user input as 8 bit int |
| . | Output current cell as ASCII |
| (Not Implemented Currently) [ | Jump past the matching ']' if the current cell is 0  |
| (Not Implemented Currently) ] | Jump back to the matching '[' if the current is nonzero |


| Additonal Better-Bf Syntax | Description |
| --- | --- |
| * | Multiply current cell value by next cell value then set next cell to 0 |
| / | Divide current cell value by next cell value then set next cell to 0 (rounds down) |
| ~ | Set current cell to 0 |
| ^ | Copy current cell value to the "cloud cell"|
| v | Paste "cloud cell" value to current cell|
| @ | Jump to cell equal to current cell value |
| # | Jump to cell 0 |
| & | Output current cell value as integer |
