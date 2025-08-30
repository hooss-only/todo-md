#include <string.h>

#include "usage.h"

void handle_args(int argc, char* argv[]);
void add_todo(int argc, char* argv[]);

int main(int argc, char* argv[]) {
	handle_args(argc, argv);

	return 0;
}

void handle_args(int argc, char* argv[]) {
	if (argc < 2) usage(1);

	if (!strcmp(argv[1], "add")) add_todo(argc, argv);
}

void add_todo(int argc, char* argv[]) {
	if (argc < 3) usage(1);
}
