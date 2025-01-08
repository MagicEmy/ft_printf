#include "./Unity/src/unity.h"
#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

void setUp(void) {
    // Not needed for these tests
}

void tearDown(void) {
    // Not needed for these tests
}

// Test character conversion
void test_ft_printf_char(void) {
    char buffer1[100];
    
    // Normal character
    int len1 = snprintf(buffer1, sizeof(buffer1), "%c", 'A');
    int len2 = ft_printf("%c", 'A');
    printf("\n");

    TEST_ASSERT_EQUAL_INT(len1, len2);
    
    // Special characters
    len1 = snprintf(buffer1, sizeof(buffer1), "%c", '\n');
    len2 = ft_printf("%c", '\n');
    TEST_ASSERT_EQUAL_INT(len1, len2);
    
    // ASCII limits
    len1 = snprintf(buffer1, sizeof(buffer1), "%c", 127);
    len2 = ft_printf("%c", 127);
    TEST_ASSERT_EQUAL_INT(len1, len2);
}

// Test string conversion
void test_ft_printf_string(void) {
    char buffer1[100];
    
    // Normal string
    int len1 = snprintf(buffer1, sizeof(buffer1), "%s", "Hello, World!");
    int len2 = ft_printf("%s", "Hello, World!\n");
    TEST_ASSERT_EQUAL_INT(len1, len2);
    
    // Empty string
    len1 = snprintf(buffer1, sizeof(buffer1), "%s", "");
    len2 = ft_printf("%s", "");
    TEST_ASSERT_EQUAL_INT(len1, len2);
    
    // NULL string should print "(null)"
    char *null_str = NULL;
    len1 = ft_printf("%s", null_str);
    int expected_null_len = 6; // Length of "(null)"
    TEST_ASSERT_EQUAL_INT(expected_null_len, len1);
}

// Test pointer conversion
void test_ft_printf_pointer(void) {
    char buffer1[100];
    int dummy = 42;
    void *ptr = &dummy;
    
    // Regular pointer
    int len1 = snprintf(buffer1, sizeof(buffer1), "%p", ptr);
    int len2 = ft_printf("%p", ptr);
    TEST_ASSERT_EQUAL_INT(len1, len2);
    
    // NULL pointer
    len1 = snprintf(buffer1, sizeof(buffer1), "%p", NULL);
    len2 = ft_printf("%p", NULL);
    TEST_ASSERT_EQUAL_INT(len1, len2);
}

// Test decimal and integer conversions
void test_ft_printf_decimal_integer(void) {
    char buffer1[100];
    
    // Regular numbers
    int len1 = snprintf(buffer1, sizeof(buffer1), "%d", 42);
    int len2 = ft_printf("%d", 42);
    TEST_ASSERT_EQUAL_INT(len1, len2);
    
    // Zero
    len1 = snprintf(buffer1, sizeof(buffer1), "%d", 0);
    len2 = ft_printf("%d", 0);
    TEST_ASSERT_EQUAL_INT(len1, len2);
    
    // Negative numbers
    len1 = snprintf(buffer1, sizeof(buffer1), "%d", -42);
    len2 = ft_printf("%d", -42);
    TEST_ASSERT_EQUAL_INT(len1, len2);
    
    // Integer limits
    len1 = snprintf(buffer1, sizeof(buffer1), "%d", INT_MAX);
    len2 = ft_printf("%d", INT_MAX);
    TEST_ASSERT_EQUAL_INT(len1, len2);
    
    len1 = snprintf(buffer1, sizeof(buffer1), "%d", INT_MIN);
    len2 = ft_printf("%d", INT_MIN);
    TEST_ASSERT_EQUAL_INT(len1, len2);
}

// Test unsigned decimal conversion
void test_ft_printf_unsigned(void) {
    char buffer1[100];
    
    // Regular unsigned number
    int len1 = snprintf(buffer1, sizeof(buffer1), "%u", 42u);
    int len2 = ft_printf("%u", 42u);
    TEST_ASSERT_EQUAL_INT(len1, len2);
    
    // Zero
    len1 = snprintf(buffer1, sizeof(buffer1), "%u", 0u);
    len2 = ft_printf("%u", 0u);
    TEST_ASSERT_EQUAL_INT(len1, len2);
    
    // Maximum unsigned int
    len1 = snprintf(buffer1, sizeof(buffer1), "%u", UINT_MAX);
    len2 = ft_printf("%u", UINT_MAX);
    TEST_ASSERT_EQUAL_INT(len1, len2);
}

// Test hexadecimal conversions
void test_ft_printf_hexadecimal(void) {
    char buffer1[100];
    
    // Regular numbers in lowercase hex
    int len1 = snprintf(buffer1, sizeof(buffer1), "%x", 0xabcdef);
    int len2 = ft_printf("%x", 0xabcdef);
    TEST_ASSERT_EQUAL_INT(len1, len2);
    
    // Regular numbers in uppercase hex
    len1 = snprintf(buffer1, sizeof(buffer1), "%X", 0xABCDEF);
    len2 = ft_printf("%X", 0xABCDEF);
    TEST_ASSERT_EQUAL_INT(len1, len2);
    
    // Zero
    len1 = snprintf(buffer1, sizeof(buffer1), "%x", 0);
    len2 = ft_printf("%x", 0);
    TEST_ASSERT_EQUAL_INT(len1, len2);
    
    // Maximum value
    len1 = snprintf(buffer1, sizeof(buffer1), "%x", UINT_MAX);
    len2 = ft_printf("%x", UINT_MAX);
    TEST_ASSERT_EQUAL_INT(len1, len2);
}

// Test percent sign
void test_ft_printf_percent(void) {
    char buffer1[100];
    
    int len1 = snprintf(buffer1, sizeof(buffer1), "%%");
    int len2 = ft_printf("%%");
    TEST_ASSERT_EQUAL_INT(len1, len2);
}

// Test mixed format string
void test_ft_printf_mixed(void) {
    char buffer1[100];
    
    int len1 = snprintf(buffer1, sizeof(buffer1), "Hex: %x, String: %s, Char: %c", 
                       255, "test", 'A');
    int len2 = ft_printf("Hex: %x, String: %s, Char: %c", 
                        255, "test", 'A');
    TEST_ASSERT_EQUAL_INT(len1, len2);
}

// Test edge cases
void test_ft_printf_edge_cases(void) {
    char buffer1[100];
    
    // Empty format string
    int len1 = snprintf(buffer1, sizeof(buffer1), "");
    int len2 = ft_printf("");
    TEST_ASSERT_EQUAL_INT(len1, len2);
    
    // Format string with no conversions
    len1 = snprintf(buffer1, sizeof(buffer1), "No conversions here!");
    len2 = ft_printf("No conversions here!");
    TEST_ASSERT_EQUAL_INT(len1, len2);
    
    // Multiple percent signs
    len1 = snprintf(buffer1, sizeof(buffer1), "%%%%%%%%%%");
    len2 = ft_printf("%%%%%%%%%%");
    TEST_ASSERT_EQUAL_INT(len1, len2);
}

int main(void) {
    UNITY_BEGIN();
    
    // Basic conversion tests
    RUN_TEST(test_ft_printf_char);
    printf("\n");
    RUN_TEST(test_ft_printf_string);
    printf("\n");
    RUN_TEST(test_ft_printf_pointer);
    printf("\n");
    RUN_TEST(test_ft_printf_decimal_integer);
    printf("\n");
    RUN_TEST(test_ft_printf_unsigned);
    printf("\n");
    RUN_TEST(test_ft_printf_hexadecimal);
    printf("\n");
    RUN_TEST(test_ft_printf_percent);
    printf("\n");

    // Complex tests
    RUN_TEST(test_ft_printf_mixed);
    printf("\n");
    RUN_TEST(test_ft_printf_edge_cases);
    
    return UNITY_END();
}