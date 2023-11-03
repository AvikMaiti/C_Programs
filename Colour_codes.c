// used for colourful output in C
#include <stdio.h>

// main function
int main(void)
{
    /* Color codes-----------------------------

    1. Text Color:

    \033[30m or \x1B[30m: Black
    \033[31m or \x1B[31m: Red
    \033[32m or \x1B[32m: Green
    \033[33m or \x1B[33m: Yellow
    \033[34m or \x1B[34m: Blue
    \033[35m or \x1B[35m: Magenta
    \033[36m or \x1B[36m: Cyan
    \033[37m or \x1B[37m: White

    2. Background Color:

    \033[40m or \x1B[40m: Black
    \033[41m or \x1B[41m: Red
    \033[42m or \x1B[42m: Green
    \033[43m or \x1B[43m: Yellow
    \033[44m or \x1B[44m: Blue
    \033[45m or \x1B[45m: Magenta
    \033[46m or \x1B[46m: Cyan
    \033[47m or \x1B[47m: White

    3. Text Styles:

    \033[0m or \x1B[0m: Reset all attributes (return to default).
    \033[1m or \x1B[1m: Bold or increased intensity.
    \033[2m or \x1B[2m: Faint (decreased intensity).
    \033[4m or \x1B[4m: Underline.
    \033[5m or \x1B[5m: Blink (slow).
    \033[7m or \x1B[7m: Reverse video (swap foreground and background colors).
    \033[8m or \x1B[8m: Conceal (hide text).
    \033[9m or \x1B[9m: Crossed-out (strikethrough).

    4. Cursor Control:

    \033[H or \x1B[H: Move cursor to the home position (1,1).
    \033[2J or \x1B[2J: Clear the screen.
    \033[A or \x1B[A: Move cursor up one line.
    \033[B or \x1B[B: Move cursor down one line.
    \033[C or \x1B[C: Move cursor right one character.
    \033[D or \x1B[D: Move cursor left one character.

    5. Other:

    \033[s or \x1B[s: Save cursor position.
    \033[u or \x1B[u: Restore cursor position.
    \033[K or \x1B[K: Clear from cursor to end of line.
    \033[m or \x1B[m: Turn off all attributes.
    ----------------------------------------------------------*/

    printf("\033[1;30m Black \033[1;0m \n");
    printf("\033[1;31m Red \033[1;0m \n");
    printf("\033[1;32m Green \033[1;0m \n");
    printf("\033[1;33m Yellow \033[1;0m \n");
    printf("\033[1;34m Blue \033[1;0m \n");
    printf("\033[1;35m Magenta \033[1;0m \n");
    printf("\033[1;36m Cyan \033[1;0m \n");
    printf("\033[1;37m White \033[1;0m \n");
    printf("\033[1;44m White \033[1;0m \n");
}