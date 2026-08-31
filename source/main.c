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

  // ITH TESTING -------------------------------------------------

  // // head ith - 3 element - index 0 (should print HeadThirdPut)
  // deq_head_put(q, "HeadFirstPut");
  // deq_head_put(q, "HeadSecondPut");
  // deq_head_put(q, "HeadThirdPut");
  // printf(deq_head_ith(q, 0));
  // printf("\n");

  // // head ith - 3 element - index 1 (should print HeadSecondPut)
  // deq_head_put(q, "HeadFirstPut");
  // deq_head_put(q, "HeadSecondPut");
  // deq_head_put(q, "HeadThirdPut");
  // printf(deq_head_ith(q, 1));
  // printf("\n");

  // // head ith - 3 element - index 2 (should print HeadFirstPut)
  // deq_head_put(q, "HeadFirstPut");
  // deq_head_put(q, "HeadSecondPut");
  // deq_head_put(q, "HeadThirdPut");
  // printf(deq_head_ith(q, 2));
  // printf("\n");

  // // head ith - 3 element - index 3 (out of bounds, returns 0)
  // deq_head_put(q, "HeadFirstPut");
  // deq_head_put(q, "HeadSecondPut");
  // deq_head_put(q, "HeadThirdPut");
  // Data d = deq_head_ith(q, 3);
  // if (d == 0) {
  //   printf("Returned 0, due to index out of bounds");
  // }
  // printf("\n");

  // // tail ith - 3 element - index 0 (should print HeadFirstPut)
  // deq_head_put(q, "HeadFirstPut");
  // deq_head_put(q, "HeadSecondPut");
  // deq_head_put(q, "HeadThirdPut");
  // printf(deq_tail_ith(q, 0));
  // printf("\n");

  // // tail ith - 3 element - index 1 (should print HeadSecondPut)
  // deq_head_put(q, "HeadFirstPut");
  // deq_head_put(q, "HeadSecondPut");
  // deq_head_put(q, "HeadThirdPut");
  // printf(deq_tail_ith(q, 1));
  // printf("\n");

  // // tail ith - 3 element - index 2 (should print HeadThirdPut)
  // deq_head_put(q, "HeadFirstPut");
  // deq_head_put(q, "HeadSecondPut");
  // deq_head_put(q, "HeadThirdPut");
  // printf(deq_tail_ith(q, 2));
  // printf("\n");

  // // tail ith - 3 element - index 3 (out of bounds, returns 0)
  // deq_head_put(q, "HeadFirstPut");
  // deq_head_put(q, "HeadSecondPut");
  // deq_head_put(q, "HeadThirdPut");
  // Data d = deq_tail_ith(q, 3);
  // if (d == 0) {
  //   printf("Returned 0, due to index out of bounds");
  // }
  // printf("\n");

  // // tail ith - 3 element - index -1 (out of bounds, returns 0)
  // deq_head_put(q, "HeadFirstPut");
  // deq_head_put(q, "HeadSecondPut");
  // deq_head_put(q, "HeadThirdPut");
  // Data d = deq_tail_ith(q, -1);
  // if (d == 0) {
  //   printf("Returned 0, due to index out of bounds");
  // }
  // printf("\n");

  // // tail ith - 1 element - index 0 (should print HeadFirstPut)
  // deq_head_put(q, "HeadFirstPut");
  // printf(deq_tail_ith(q, 0));
  // printf("\n");

  // // tail ith - 1 element - index 1 (out of bounds)
  // deq_head_put(q, "HeadFirstPut");
  // Data d = deq_tail_ith(q, -1);
  // if (d == 0) {
  //   printf("Returned 0, due to index out of bounds");
  // }
  // printf("\n");

  // // head ith - 0 element - index 0 (out of bounds)
  // Data d = deq_tail_ith(q, 0);
  // if (d == 0) {
  //   printf("Returned 0, due to index out of bounds");
  // }
  // printf("\n");

  char *s=deq_str(q,0);
  printf("%s\n",s);
  free(s);

  deq_del(q,0);
  return 0;
}
