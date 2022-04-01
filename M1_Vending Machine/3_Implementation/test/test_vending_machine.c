#include "unity.h"
#include <Vending_Machine.h>

/* Modify these two lines according to the project */
#include <Vending_Machine.h>
#define PROJECT_NAME    "Vending Machine"

/* Prototypes for all the test functions */
 void menu(void);
 void Chocolate(void);
 void Chips(void);
 void Staionary(void);
void main()

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
    /* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(menu);
  RUN_TEST(chocolate);
  RUN_TEST(stationary);
  Run_TEST(chips);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */
void test_menu(void)
{
    TEST_ASSERT_EQUAL(chocolate, menu(Chips));

    /* Dummy fail*/
  TEST_ASSERT_EQUAL(chocolate , menu(Pepsi));

}
void chocolate(void) {
  TEST_ASSERT_EQUAL(250,100, chocolate(250,100));

  /* Dummy fail*/
  TEST_ASSERT_EQUAL(100,75, chocloates(100,75));
}

void test_stationary(void) {
  TEST_ASSERT_EQUAL(100,50,25,25, stationary(1));

  /* Dummy fail*/
  TEST_ASSERT_EQUAL(200,100,50,50, stationary(4));
}
void test_chips(void) {
  TEST_ASSERT_EQUAL(250,100, chips(2));

  /* Dummy fail*/
  TEST_ASSERT_EQUAL(100,75, chips(1));
}

© 2022 GitHub, Inc.
Terms
Privacy




