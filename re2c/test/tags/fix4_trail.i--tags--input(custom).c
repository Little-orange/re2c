/* Generated by re2c */
#include <stddef.h>
#include <stdio.h>

static void lex(const char *s)
{
#define YYPEEK()           *s
#define YYSKIP()           ++s
#define YYBACKUP()         marker = s
#define YYRESTORE()        s = marker
#define YYBACKUPTAG(t)     t = s
#define YYRESTORETAG(t)    s = t
#define YYCOPYTAG(t1, t2)  t1 = t2
    const char *marker, *p0, *p1, *p2, *p3;
    const char *yyt1;const char *yyt2;const char *yyt3;const char *yyt4;const char *yyt5;
    
{
	char yych;
	yych = YYPEEK ();
	switch (yych) {
	case '0':
		YYBACKUPTAG (yyt5);
		goto yy4;
	default:	goto yy2;
	}
yy2:
	YYSKIP ();
yy3:
	{ printf("error\n"); return; }
yy4:
	YYSKIP ();
	YYBACKUP ();
	yych = YYPEEK ();
	switch (yych) {
	case '1':
		YYBACKUPTAG (yyt4);
		goto yy5;
	case '2':
		YYBACKUPTAG (yyt3);
		YYBACKUPTAG (yyt4);
		goto yy8;
	default:	goto yy3;
	}
yy5:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case '1':	goto yy5;
	case '2':
		YYBACKUPTAG (yyt3);
		goto yy8;
	default:	goto yy7;
	}
yy7:
	YYRESTORE ();
	goto yy3;
yy8:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case '3':
		YYBACKUPTAG (yyt2);
		goto yy9;
	case '4':
		YYBACKUPTAG (yyt1);
		YYBACKUPTAG (yyt2);
		goto yy11;
	default:	goto yy7;
	}
yy9:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case '3':	goto yy9;
	case '4':
		YYBACKUPTAG (yyt1);
		goto yy11;
	default:	goto yy7;
	}
yy11:
	YYSKIP ();
	YYRESTORETAG (yyt1);
	YYCOPYTAG (p3, yyt2);
	YYCOPYTAG (p2, yyt3);
	YYCOPYTAG (p1, yyt4);
	YYCOPYTAG (p0, yyt5);
	{
            printf("'%.*s', '%.*s', '%.*s', '%.*s', '%s'\n",
                p1 - p0, p0,
                p2 - p1, p1,
                p3 - p2, p2,
                s - p3, p3,
                s);
                return;
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
