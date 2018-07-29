#ifndef __WATCHPOINT_H__
#define __WATCHPOINT_H__

#include "common.h"

typedef struct watchpoint {
  int NO;
  struct watchpoint *next;
  char expr[32];
  uint32_t old_value;

  /* TODO: Add more members if necessary */


} WP;
void info_w();
WP* new_wp(char *str);
void free_wp(WP wp);
#endif
