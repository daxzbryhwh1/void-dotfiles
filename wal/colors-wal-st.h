const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#1d0c13", /* black   */
  [1] = "#A3323F", /* red     */
  [2] = "#8B5156", /* green   */
  [3] = "#A66267", /* yellow  */
  [4] = "#D95D63", /* blue    */
  [5] = "#DD837C", /* magenta */
  [6] = "#BA7B85", /* cyan    */
  [7] = "#c6c2c4", /* white   */

  /* 8 bright colors */
  [8]  = "#705c63",  /* black   */
  [9]  = "#A3323F",  /* red     */
  [10] = "#8B5156", /* green   */
  [11] = "#A66267", /* yellow  */
  [12] = "#D95D63", /* blue    */
  [13] = "#DD837C", /* magenta */
  [14] = "#BA7B85", /* cyan    */
  [15] = "#c6c2c4", /* white   */

  /* special colors */
  [256] = "#1d0c13", /* background */
  [257] = "#c6c2c4", /* foreground */
  [258] = "#c6c2c4",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
