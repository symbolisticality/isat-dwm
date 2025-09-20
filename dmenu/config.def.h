/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"VCR OSD MONO:size=11"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#a7a7a7", "#000000" },
	[SchemeSel] = { "#e8e8e8", "#000000" },
	[SchemeOut] = { "#e8e8e8", "#000000" },

};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 16;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static unsigned int border_width = 4;
