/*
* base16-DForest.h
*
* Base16: (https://github.com/chriskempson/base16)
*
* Authors: JoaoCostaIFG
*
* Scheme: Dawid Kurek (dawikur@gmail.com), morhetz (https://github.com/morhetz/gruvbox)
* Template: Honza Pokorny <me@honza.ca>
*/


static const char *colorname[] = {
  "#0b0a18", /* base00 */
  "#E0254C", /* base08 */
  "#99C794", /* base0B */
  "#FAC863", /* base0A */
  "#6699CC", /* base0D */
  "#C594C5", /* base0E */
  "#5FB3B3", /* base0C */
  "#aca9d6", /* base05 */
  "#3e3a79", /* base03 */
  "#F99157", /* base09 */
  "#1b1934", /* base01 */
  "#2d2956", /* base02 */
  "#8b86c5", /* base04 */
  "#cdcbe6", /* base06 */
  "#AB7967", /* base0F */
  "#eeeef7", /* base07 */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
unsigned int defaultfg = 7;
unsigned int defaultbg = 0;
unsigned int defaultcs = 7;
unsigned int defaultrcs = 7;
