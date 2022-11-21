# Better-Bf
Brainfuck with more syntax

Info
-----
Better Brainfuck (BBf or Better Bf) is a Brainfuck derivative with additonal syntax.
These addition syntax should allow for cleaner and slightly more readable code.
BBf has an array of 65536 cells, each cell can have a value of 0-255.

Brainfuck Syntax
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
