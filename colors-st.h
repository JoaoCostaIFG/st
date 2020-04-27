const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#6C6C6C", /* black */
  [1] = "#5D284F", /* red  */
  [2] = "#5A475F", /* green */
  [3] = "#9B0830", /* yellow */
  [4] = "#E2122E", /* blue */
  [5] = "#9B2551", /* magenta */
  [6] = "#E0254C", /* cyan */
  [7] = "#dda4a9", /* white */

  /* 8 bright colors */
  [8] = "#76a15d",  /* black */
  [9] = "#5D284F",  /* red */
  [10] = "#5A475F", /* green */
  [11] = "#9B0830", /* yellow */
  [12] = "#E2122E", /* blue */
  [13] = "#9B2551", /* magenta */
  [14] = "#E0254C", /* cyan */
  [15] = "#DDA4A9", /* white */

	[255] = 0,

  /* special colors */
  [256] = "#0b0a18", /* background */
  [257] = "#dda4a9", /* foreground */
  [258] = "#dda4a9", /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
unsigned int defaultfg = 257;
unsigned int defaultbg = 256;
unsigned int defaultcs = 258;
unsigned int defaultrcs = 258;

