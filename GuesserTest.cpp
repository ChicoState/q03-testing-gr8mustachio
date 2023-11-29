/**
 * Unit Tests for the class
**/

#include <gtest/gtest.h>
#include "Guesser.h"

class GuesserTest : public ::testing::Test
{
	protected:
		GuesserTest(){} //constructor runs before each test
		virtual ~GuesserTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(GuesserTest, smoke_test)
{
    ASSERT_TRUE( 1 == 1 );
}

TEST(GuesserTest, distance_test) {
	Guesser guess("Abb");


}

TEST(GuesserTest, happy_match_test) {
	Guesser guess("Hel");
	bool isMatch = guess.match("Hel");
	ASSERT_EQ(true, isMatch);

}

TEST(GuesserTest, sad_match_test){
	Guesser guess("Hello");
	bool isMatch = guess.match("wnefjlwbefj");
	ASSERT_EQ(true, isMatch);

}