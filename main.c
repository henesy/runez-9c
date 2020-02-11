#include <u.h>
#include <libc.h>
#include "runez.h"

int chatty		= 0;		// Verbose debug output
int mode		= 0;		// Compress mode by default, 1 decompresses

void compress(int, int);
void decompress(int, int);

void
usage(void)
{
	fprint(2, "usage: %s [-D] [-c | -d]\n", argv0);
	exits("usage");
}


// Naive utf-8 text compression/decompression program
void
main(int argc, char *argv[])
{
	int in = 0, out = 1;	// Use stdin/stdout by default

	ARGBEGIN {
	case 'c':
		mode = 0;
		break;
	case 'd':
		mode = 1;
		break;
	case 'D':
		chatty = 1;
		break;
	default:
		usage();
	} ARGEND
	
	switch(mode){
	case 0:
		compress(in, out);
		break;
	case 1:
		decompress(in, out);
		break;
	default:
		sysfatal("err: this should never happen");
	}

	exits(nil);
}

// Compress text to the archive format
void
compress(int in, int out)
{
	
}

// Decompress the archive format to text
void
decompress(int in, int out)
{
	// TODO - use qsort(2) for sorting
}