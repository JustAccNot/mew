/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int top              = 1;                        /* -b option; if 0, appear at bottom */
static int centered         = 0;                        /* -c option; centers mew on screen */
static int min_width        = 500;                      /* minimum width when centered */
static int draw_input       = 1;                        /* -noi option; if 0, no input box */
static int draw_input_box   = 1;                        /* -noib option; if 0, do not draw the input box */
static int passwd           = 0;                        /* -p option; display input as asterisks */
static const char *fonts[]  = { "monospace:size=14" };  /* -f option overrides fonts[0] */
static const char *prompt   = NULL;                     /* -p option; prompt to the left of input field */
static uint32_t colors[][2] = {
	/*               fg         bg          */
	[SchemeNorm] = { 0xc5c8c6ff, 0x1d1f21cc },
	[SchemeSel]  = { 0xeeeeeeff, 0x51629ccc },
	[SchemeOut]  = { 0x000000ff, 0x00ffffff },
};

/* -m option; if provided, use that output instead of default output */
static const char *output_name = NULL;

/* -l option; if nonzero, use vertical list with given number of lines */
static unsigned int lines = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
