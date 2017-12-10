#ifndef _SCDOC_PARSER_H
#define _SCDOC_PARSER_H
#include <stdarg.h>
#include <stdint.h>
#include <stdio.h>

struct parser {
	FILE *input, *output;
	int line, col;
};

void parser_fatal(struct parser *parser, const char *err);
uint32_t parser_getch(struct parser *parser);
int roff_macro(struct parser *p, char *cmd, ...);

#endif
