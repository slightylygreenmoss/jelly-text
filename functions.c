//function declarations
#include"functions.h"



//miracle snippet of code from stack overflow saves the day yet again
void clear(void){
        //clear screen apparently no fucking clue TwT
const char*CLEAR_SCREEN_ANSI = "\x1b[1;1H\x1b[2J";//ANSI?? IM GOING INSANE AND THIS IS THE FIRST FUNCTION
write(STDOUT_FILENO, CLEAR_SCREEN_ANSI, 12);
}

