#include "CUnit/Basic.h"

#include "fileA.h"

/* The suite initialization function.
 * Returns zero on success, non-zero otherwise.
 */
int init_suite_fileA(void) {
/* 
 *   if (problem during initialisation)
 *     return -1; // this number can be used to explicit the problem
 */
  return 0;
}

/* The suite cleanup function.
 * Returns zero on success, non-zero otherwise.
 */
int clean_suite_fileA(void) {
/* 
 *   if (problem during cleaning)
 *     return -1; // this number can be used to explicit the problem
 */
  return 0;
}

/* A test
 */
void testNormalValues(void) {
  /* classic cases */
  CU_ASSERT_EQUAL(simpleDivision(1, 1), 1);
  CU_ASSERT_EQUAL(simpleDivision(100, 10), 10);
  CU_ASSERT_EQUAL(simpleDivision(42, 6), 7);

  /* non integer result should be floored */
  CU_ASSERT_EQUAL(simpleDivision(5, 3), 1);
  CU_ASSERT_EQUAL(simpleDivision(14, 4), 3);
}

/* Another test
 */
void testErrorValues(void) {
  /* division by 0 should return -1 */
  CU_ASSERT_EQUAL(simpleDivision(1, 0), -1);
  CU_ASSERT_EQUAL(simpleDivision(427, 0), -1);

  /* strange cases */
  CU_ASSERT_EQUAL(simpleDivision(0, 0), -1);
  CU_ASSERT_EQUAL(simpleDivision(0, 1), 0);

  /* use of negative number should return -2 */
  CU_ASSERT_EQUAL(simpleDivision(-63, 39), -2);
  CU_ASSERT_EQUAL(simpleDivision(78, -36), -2);
  CU_ASSERT_EQUAL(simpleDivision(-43, -23), -2);
}

