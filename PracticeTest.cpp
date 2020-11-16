/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"

class PracticeTest : public ::testing::Test {
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PracticeTest, is_not_simple_palindrome) {
    Practice obj;
    bool actual = obj.isPalindrome("Not a palindrome");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, is_simple_palindrome) {
	Practice obj;
	bool actual = obj.isPalindrome("racecar");
	ASSERT_TRUE(actual);
}

TEST(PracticeTest, symbols_not_palindrome) {
	Practice obj;
	bool actual = obj.isPalindrome("[;");
	ASSERT_FALSE(actual);
}

TEST(PracticeTest, empty_string_palindrome) {
	// This is a sad test bc I'm trying to break the code
    Practice obj;
    bool actual = obj.isPalindrome("");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, single_character_palindrome) {
	Practice obj;
	bool actual = obj.isPalindrome("a");
	ASSERT_TRUE(actual);
}

TEST(PracticeTest, simple_sort) {
	Practice obj;
	int first = 1;
	int second = 2;
	int third = 3;
	bool actual = obj.sortDescending(first, second, third);
	ASSERT_TRUE(actual);
}

TEST(PracticeTest, backwards_simple_sort) {
	Practice obj;
	int first = 3;
	int second = 2;
	int third = 1;
	bool actual = obj.sortDescending(first, second, third);
	ASSERT_TRUE(actual);
}

TEST(PracticeTest, not_so_simple_sort) {
	Practice obj;
	int first = 4;
	int second = 2;
	int third = 3;
	bool actual = obj.sortDescending(first, second, third);
	ASSERT_TRUE(actual);
}

TEST(PracticeTest, backwards_not_so_simple_sort) {
	Practice obj;
	int first = 3;
	int second = 2;
	int third = 4;
	bool actual = obj.sortDescending(first, second, third);
	ASSERT_TRUE(actual);
}

TEST(PracticeTest, same_sort) {
	Practice obj;
	int first = 100;
	int second = 100;
	int third = 50;
	bool actual = obj.sortDescending(first, second, third);
	ASSERT_TRUE(actual);
}

TEST(PracticeTest, all_same_sort) {
	Practice obj;
	int first = 100;
	int second = 100;
	int third = 100;
	bool actual = obj.sortDescending(first, second, third);
	ASSERT_TRUE(actual);
}
