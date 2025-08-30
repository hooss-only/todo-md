#include "usage.h"

#define PROGRAM_NAME "todo"

void handle_args(int argc, char* argv[]);

int main(int argc, char* argv[]) {
	handle_args(argc, argv);

	return 0;
}

void handle_args(int argc, char* argv[]) {
	if (argc < 2) usage(2);
}
