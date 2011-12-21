#ifndef TEST_PLAYER_H
#define TEST_PLAYER_H
#include <gtest/gtest.h>
#include "players.h"
#include "movingobjects.h"
namespace {

class testplayer: public testing::Test
{
protected:  // You should make the members protected s.t. they can be
    // accessed from sub-classes.
    testplayer(){

    }
    virtual ~testplayer() {

    }
    // virtual void SetUp() will be called before each test is run.  You
    // should define it if you need to initialize the varaibles.
    // Otherwise, this can be skipped.
    virtual void SetUp() {

    }
    // virtual void SetUp() will be called before each test is run.  You
    // should define it if you need to initialize the varaibles.
    // Otherwise, this can be skipped.
    // virtual void TearDown() {
    // }

    // A helper function that some test uses.
    void doSomeHelp(){}

    // Declares the variables your tests want to use.
    Players p;
};

// A demo of call TEST FUNCTION
TEST_F(testplayer, TestVX) {
    // You can access data in the test fixture here.
    EXPECT_EQ(p.getVX(),0);
    //direcet call member function
    doSomeHelp();
}
TEST_F(testplayer, TestVY) {

    //write a test functon
    EXPECT_EQ(p.getVY(),0);
}
TEST_F(testplayer, Test_scores) {

    //write a test functon
    EXPECT_EQ(p.scores,0);
}

}//namespace

#endif // TEST_PLAYER_H
