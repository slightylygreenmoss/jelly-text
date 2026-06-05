#ifndef FUNCTIONS_H
#define FUNCTIONS_H
//this file holds all of the functions
#include<time.h>
#include<stdlib.h>
#include<unistd.h>
#include<stdio.h>

void initiatetable(void);//makes the table to save space? barely but come on im a new guy here. look up table

int keycreator(void);//this creates a key based on some security questions haha google am i rite? and stores it into a key file tf? actually no thats a sec vulnurability ill add a debug mode where it stores it in a file 

int xor(int*,char*);//key,4 by 1 by 8 chunk of integers 

FILE* newjounral(void);//creates a new file in the specific format

void readjournal(void);//reads a specific file based on what the user wants to read? decrypts as well only if key is entered well sec questions answered

void writejournal(FILE*);//writes whatever they type into the file but encrypted
	     //every new line starts with an integer number... this sets the max size of any file to hold on.. 9999 lines

void edit();//oh my gosh...which BLITHERINGIDIOT *sigh* fine noramal idiot(tis me TwT) added this now i have to code it.
	    //reads, loads the whole thing into the buffer, user edits, encrypts, stores.
	    //uhhh fuck line array stuff.. every four spaces you start the line with the next line number
	    //select file
	    //traverse through the file while loop up down operations to go to the next or prev line clear everytime you go to a new line
	    //left right? no bro no your ass is rewriting the whole line i do not give a fuck. also no taksie backsies. be glad im doing this for you
	    //i could make it skip four bits to the left or right its possible.... how do i show the cursor tho print new character special one at cursor position after each input my gosh is this inefficient im so sorry people
	    //insert mode and type mode in insert mode you can erase and move around in type mode you can only type you cant add new lines 
	    //wasd to travel and esc to enter into edit mode any time :3 esc is 27 in decimal
	    //cursor is 124 in ascii its | *maniacal laughter*
	    //fgetc magic

void clear(void);


typedef struct{
	char k;//holds value ie the alphabets and like numbers and punctuation like . ? , four spaces is counted as a new line
	char hash[4];//holds code also char because char is 1 byte so this is 3 bytes int would have been 12?
}table;

extern *table look;

//The longest sentence in English is 13,955 words long, found in Jonathan Coe's novel The Rotter's Club. I'm not hard-coding it. FUCK YOU.

#endif


