#include <stdio.h>
#include <stdlib.h>

#include "deq.h"

int main() {
  Deq q=deq_new();

  // BASIC MAIN TESTING SUITE - Comment/uncomment out individual test sections for unit testing functionality

  // // head puts
  // deq_head_put(q, "HeadFirstPut");
  // deq_head_put(q, "HeadSecondPut");
  // deq_head_put(q, "HeadThirdPut");
  // deq_tail_put(q, "HeadFourthPut");

  // // tail puts
  // deq_tail_put(q, "TailFirstPut");
  // deq_tail_put(q, "TailSecondPut");
  // deq_tail_put(q, "TailThirdPut");
  // deq_tail_put(q, "TailFourthPut");

  // both head and tail puts
  deq_head_put(q, "HeadFirstPut");
  deq_tail_put(q, "TailFirstPut");
  deq_head_put(q, "HeadSecondPut");
  deq_tail_put(q, "TailSecondPut");
  deq_head_put(q, "HeadThirdPut");
  deq_head_put(q, "HeadFourthPut");
  deq_tail_put(q, "TailThirdPut");
  deq_tail_put(q, "TailFourthPut");

  char *s=deq_str(q,0);
  printf("%s\n",s);
  free(s);

  deq_del(q,0);
  return 0;
}
