/*
regarding program starting:
	user@computer:~$ <path-to-converter> foo.asm -c att -t intel - bar.asm
	The user will be able to initiat the converter, and input a file, what syntax it is in, and what syntax to convert to.
	Flags:
		-f || --file		=> specifies a file will start
		-c || --from		=> specifies that the next word is the current syntax of the file, that is what the file is to be converted from
		-t || --to			=> specifies that the next word is what syntax the file is to be converted to
		-o || --output		=> specifies file to output
		-? || --help || -h	=> displays information about how to run the program
*/

int main(char *args, int argc) {
	FILE file;
	register int rcx;
	for (rcx = 0; *(args+rcx) != ' '; ++rcx);
	while (rcx < argc) {
		switch(*(args+rcx)) {
			case '-':
				rcx++;
				switch (*(args+rcx)) {
					case 'f':
						rcx++;
						if (*(args+rcx) == ' ') rcx++;
						switch (*(args+rcx)) {
							case 'a':
								break;
							case 'i':
								break;
						}
						break;
					case 'c':
						rcx++;
						break;
					case 't':
						rcx++;
						break;
					case 'o':
						rcx++;
						break;
					case '?':
						rcx++;
						break;
					case 'h':
						rcx++;
						break;
					case '-':
						break;
					default:
				}
				break;
			default:
		}
	}
}
