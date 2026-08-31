#include <stdio.h>
#include <stdlib.h>

#include "deq.h"

int main() {
  Deq q=deq_new();

  // BASIC MAIN TESTING SUITE - Comment/uncomment out individual test sections for unit testing functionality

  // PUT TESTING -------------------------------------------------

  // // head puts
  // deq_head_put(q, "HeadFirstPut");
  // deq_head_put(q, "HeadSecondPut");
  // deq_head_put(q, "HeadThirdPut");
  // deq_head_put(q, "HeadFourthPut");

  // // tail puts
  // deq_tail_put(q, "TailFirstPut");
  // deq_tail_put(q, "TailSecondPut");
  // deq_tail_put(q, "TailThirdPut");
  // deq_tail_put(q, "TailFourthPut");

  // // both head and tail puts 1
  // deq_head_put(q, "HeadFirstPut");
  // deq_tail_put(q, "TailFirstPut");
  // deq_head_put(q, "HeadSecondPut");
  // deq_tail_put(q, "TailSecondPut");
  // deq_head_put(q, "HeadThirdPut");
  // deq_head_put(q, "HeadFourthPut");
  // deq_tail_put(q, "TailThirdPut");
  // deq_tail_put(q, "TailFourthPut");

  // // both head and tail puts 2
  // deq_tail_put(q, "TailFirstPut");
  // deq_tail_put(q, "TailSecondPut");
  // deq_head_put(q, "HeadFirstPut");
  // deq_head_put(q, "HeadSecondPut");

  // GET TESTING -------------------------------------------------

  // // get head for a 3-element deq. (HeadThirdPut should be gotten)
  // deq_head_put(q, "HeadFirstPut");
  // deq_head_put(q, "HeadSecondPut");
  // deq_head_put(q, "HeadThirdPut");
  // deq_head_get(q);

  // // get tail for a 3-element deq. (HeadFirstPut should be gotten)
  // deq_head_put(q, "HeadFirstPut");
  // deq_head_put(q, "HeadSecondPut");
  // deq_head_put(q, "HeadThirdPut");
  // deq_tail_get(q);

  // // get tail for a 3-element deq part 2 (should be empty)
  // deq_head_put(q, "HeadFirstPut");
  // deq_head_put(q, "HeadSecondPut");
  // deq_head_put(q, "HeadThirdPut");
  // deq_tail_get(q);
  // deq_tail_get(q);
  // deq_tail_get(q);

  // // get tail on 1-element deq
  // deq_head_put(q, "HeadFirstPut");
  // deq_tail_get(q);

  // // get head on 1-element deq
  // deq_head_put(q, "HeadFirstPut");
  // deq_head_get(q);

  // // get head/tail on 0-element deq (returns 0, nothing happens)
  // deq_head_get(q);
  // deq_tail_get(q);

  char *s=deq_str(q,0);
  printf("%s\n",s);
  free(s);

  deq_del(q,0);
  return 0;
}
