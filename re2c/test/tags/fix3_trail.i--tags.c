/* Generated by re2c */
#include <stddef.h>
#include <stdio.h>

static void lex(const char *YYCURSOR)
{
    const char *YYMARKER, *p0, *p1, *p2, *p3;
    const char *yyt1;const char *yyt2;const char *yyt3;const char *yyt4;const char *yyt5;
    
{
	char yych;
	yych = *YYCURSOR;
	switch (yych) {
	case '0':
		yyt5 = YYCURSOR;
		goto yy4;
	case '1':
		yyt4 = yyt5 = YYCURSOR;
		goto yy7;
	case '2':
		yyt3 = yyt4 = yyt5 = YYCURSOR;
		goto yy9;
	case '3':
		yyt2 = yyt3 = yyt4 = yyt5 = YYCURSOR;
		goto yy11;
	case '4':
		yyt1 = yyt2 = yyt3 = yyt4 = yyt5 = YYCURSOR;
		goto yy13;
	default:	goto yy2;
	}
yy2:
	++YYCURSOR;
	{ printf("error\n"); return; }
yy4:
	yych = *++YYCURSOR;
	switch (yych) {
	case '0':	goto yy4;
	case '1':
		yyt4 = YYCURSOR;
		goto yy7;
	case '2':
		yyt3 = yyt4 = YYCURSOR;
		goto yy9;
	case '3':
		yyt2 = yyt3 = yyt4 = YYCURSOR;
		goto yy11;
	case '4':
		yyt1 = yyt2 = yyt3 = yyt4 = YYCURSOR;
		goto yy13;
	default:
		yyt1 = yyt2 = yyt3 = yyt4 = YYCURSOR;
		goto yy6;
	}
yy6:
	YYCURSOR = yyt1;
	p3 = yyt2;
	p2 = yyt3;
	p1 = yyt4;
	p0 = yyt5;
	{
            printf("'%.*s', '%.*s', '%.*s', '%.*s', '%s'\n",
                p1 - p0, p0,
                p2 - p1, p1,
                p3 - p2, p2,
                YYCURSOR - p3, p3,
                YYCURSOR);
                return;
        }
yy7:
	yych = *++YYCURSOR;
	switch (yych) {
	case '1':	goto yy7;
	case '2':
		yyt3 = YYCURSOR;
		goto yy9;
	case '3':
		yyt2 = yyt3 = YYCURSOR;
		goto yy11;
	case '4':
		yyt1 = yyt2 = yyt3 = YYCURSOR;
		goto yy13;
	default:
		yyt1 = yyt2 = yyt3 = YYCURSOR;
		goto yy6;
	}
yy9:
	yych = *++YYCURSOR;
	switch (yych) {
	case '2':	goto yy9;
	case '3':
		yyt2 = YYCURSOR;
		goto yy11;
	case '4':
		yyt1 = yyt2 = YYCURSOR;
		goto yy13;
	default:
		yyt1 = yyt2 = YYCURSOR;
		goto yy6;
	}
yy11:
	yych = *++YYCURSOR;
	switch (yych) {
	case '3':	goto yy11;
	case '4':
		yyt1 = YYCURSOR;
		goto yy13;
	default:
		yyt1 = YYCURSOR;
		goto yy6;
	}
yy13:
	yych = *++YYCURSOR;
	switch (yych) {
	case '4':	goto yy13;
	default:	goto yy6;
	}
}

}

int main(int argc, char **argv)
{
    for (int i = 1; i < argc; ++i) {
        lex(argv[i]);
    }
    return 0;
}
re2c: warning: line 17: rule matches empty string [-Wmatch-empty-string]
