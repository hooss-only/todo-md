#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "usage.h"
#include "exit.h"
#include "file.h"

void handle_args(int argc, char* argv[]);
void add_todo(int argc, char* argv[]);

int main(int argc, char* argv[]) {
	handle_args(argc, argv);

	return EXIT_OK;
}

void handle_args(int argc, char* argv[]) {
	if (argc < 2) usage(EXIT_USAGE);
	
	char* cmd = argv[1];
	if (!strcmp(cmd, "add")) 				add_todo(argc, argv);
	else if (!strcmp(cmd, "help"))	usage(EXIT_OK);
}

void add_todo(int argc, char* argv[]) {
	if (argc < 3) usage(EXIT_USAGE);
	if (find_todo() == -1) exit(EXIT_FILE_ERR);
	
	printf("hi\n");
}
