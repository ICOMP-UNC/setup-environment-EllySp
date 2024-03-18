#include "../../external/Unity/src/unity.h"
#include <logic.h>

void test_logic_add(void)
{
    TEST_ASSERT_EQUAL(5, add(2, 3));
    TEST_ASSERT_EQUAL(-1, add(2, -3));
}

void test_logic_multiply(void)
{
    TEST_ASSERT_EQUAL(6, multiply(2, 3));
    TEST_ASSERT_EQUAL(-9, multiply(3, -3));
    TEST_ASSERT_EQUAL(12, multiply(-4, -3));
}

void test_logic_subtract(void)
{
    TEST_ASSERT_EQUAL(-1, subtract(2, 3));
    TEST_ASSERT_EQUAL(5, subtract(2, -3));
    TEST_ASSERT_EQUAL(1, subtract(-2, -3));
}

void test_logic_divide(void)
{
    TEST_ASSERT_EQUAL(2.0, divide(8, 4));
    TEST_ASSERT_EQUAL(-1.0, divide(2, 0));
}

void setUp(void)
{
}

void tearDown(void)
{
}

int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_logic_add);
    RUN_TEST(test_logic_multiply);
    RUN_TEST(test_logic_subtract);
    RUN_TEST(test_logic_divide);
    return UNITY_END();
}
