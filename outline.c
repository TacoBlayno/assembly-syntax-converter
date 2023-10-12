/*
regarding program starting:
	user@computer:~$ <path-to-converter> foo.asm -c att -t intel - bar.asm
	The user will be able to initiate the converter, and input a file, what syntax it is in, and what syntax to convert to.
	Flags:
		-f || --file		=> specifies a file will start
		-c || --from		=> specifies that the next word is the current syntax of the file, that is what the file is to be converted from
		-t || --to			=> specifies that the next word is what syntax the file is to be converted to
		-o || --output		=> specifies file to output
		-? || --help || -h	=> displays information about how to run the program
*/

#include <stdio.h>

int main(int argc, char **args) {
	args++;
	argc--;
	putchar(**args);
	if (*args == "-?" || *args == "-h" || *args == "--help") {
		puts("Help page not yet made!");
		return 0;
	}

	//register int rcx = 0;

	//for (rcx; rcx < argc; rcx++) {
	//	if (*args == '-') {
	//		continue;
	//	}
	//}
}
