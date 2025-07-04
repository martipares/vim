/* Automatically generated code by create_cmdidxs.vim
 *
 * Table giving the index of the first command in cmdnames[] to lookup
 * based on the first letter of a command.
 */
static const unsigned short cmdidxs1[26] =
{
  /* a */ 0,
  /* b */ 21,
  /* c */ 45,
  /* d */ 112,
  /* e */ 138,
  /* f */ 167,
  /* g */ 184,
  /* h */ 190,
  /* i */ 200,
  /* j */ 221,
  /* k */ 223,
  /* l */ 228,
  /* m */ 291,
  /* n */ 309,
  /* o */ 329,
  /* p */ 341,
  /* q */ 382,
  /* r */ 385,
  /* s */ 406,
  /* t */ 476,
  /* u */ 523,
  /* v */ 535,
  /* w */ 556,
  /* x */ 570,
  /* y */ 580,
  /* z */ 581
};

/*
 * Table giving the index of the first command in cmdnames[] to lookup
 * based on the first 2 letters of a command.
 * Values in cmdidxs2[c1][c2] are relative to cmdidxs1[c1] so that they
 * fit in a byte.
 */
static const unsigned char cmdidxs2[26][26] =
{ /*         a   b   c   d   e   f   g   h   i   j   k   l   m   n   o   p   q   r   s   t   u   v   w   x   y   z */
  /* a */ {  0,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  5,  6,  7,  0,  0,  0,  8, 17,  0, 18,  0,  0,  0,  0,  0 },
  /* b */ {  2,  0,  0,  5,  6,  8,  0,  0,  0,  0,  0,  9, 10, 11, 12, 13,  0, 14,  0,  0,  0,  0, 23,  0,  0,  0 },
  /* c */ {  3, 12, 16, 18, 20, 22, 25,  0,  0,  0,  0, 33, 38, 41, 47, 57, 59, 60, 61,  0, 63,  0, 66,  0,  0,  0 },
  /* d */ {  0,  0,  0,  0,  0,  0,  0,  0,  9, 19,  0, 20,  0,  0, 21,  0,  0, 23, 24,  0,  0,  0,  0,  0,  0,  0 },
  /* e */ {  1,  0,  2,  0,  0,  0,  0,  0,  0,  0,  0,  9, 11, 12,  0,  0,  0,  0,  0,  0,  0, 23,  0, 24,  0,  0 },
  /* f */ {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 10,  0,  0,  0,  0,  0, 16,  0,  0,  0,  0,  0 },
  /* g */ {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  0,  0,  2,  0,  0,  4,  5,  0,  0,  0,  0 },
  /* h */ {  5,  0,  0,  0,  0,  0,  0,  0,  6,  0,  0,  0,  0,  0,  9,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
  /* i */ {  1,  0,  0,  0,  0,  3,  0,  0,  0,  4,  0,  5,  6,  0,  0, 15,  0,  0, 16,  0, 18,  0,  0,  0,  0,  0 },
  /* j */ {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  0,  0,  0,  0,  0 },
  /* k */ {  0,  0,  0,  0,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
  /* l */ {  3, 11, 15, 19, 20, 25, 28, 33,  0,  0,  0, 35, 38, 41, 45, 51,  0, 53, 62, 54, 55, 59, 61,  0,  0,  0 },
  /* m */ {  1,  0,  0,  0,  7,  0,  0,  0,  0,  0, 10,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 16 },
  /* n */ {  0,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  5,  8, 10,  0,  0,  0,  0,  0, 17,  0,  0,  0,  0,  0 },
  /* o */ {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  2,  5,  0,  0,  0,  0,  0,  0,  9,  0, 11,  0,  0,  0 },
  /* p */ {  1,  3,  4,  0,  5,  0,  0,  0,  0,  0,  0,  0,  0,  0,  8, 10,  0,  0, 17, 18, 27,  0, 29,  0, 30,  0 },
  /* q */ {  2,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
  /* r */ {  0,  0,  0,  0,  0,  0,  0,  0, 13,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 15, 20,  0,  0,  0,  0 },
  /* s */ {  2,  6, 15,  0, 19, 23,  0, 25, 26,  0,  0, 29, 31, 35, 39, 41,  0, 50,  0, 51,  0, 64, 65,  0, 66,  0 },
  /* t */ {  2,  0, 19,  0, 24, 26,  0, 27,  0, 29,  0, 30, 34, 37, 39, 40,  0, 41, 43,  0, 44,  0,  0,  0, 46,  0 },
  /* u */ {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 11,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
  /* v */ {  1,  0,  0,  0,  2,  0,  0,  0,  5,  0,  0,  0, 12, 15,  0,  0,  0,  0, 18,  0, 19,  0,  0,  0,  0,  0 },
  /* w */ {  2,  0,  0,  0,  0,  0,  0,  3,  4,  0,  0,  0,  0,  8,  0,  9, 10,  0,  0,  0, 12, 13,  0,  0,  0,  0 },
  /* x */ {  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  2,  5,  0,  0,  0,  7,  0,  0,  8,  0,  0,  0,  0,  0 },
  /* y */ {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 },
  /* z */ {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0 }
};

static const int command_count = 598;
