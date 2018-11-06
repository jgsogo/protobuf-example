#include <gtest/gtest.h> // googletest header file

#include "../library/worker.h"

TEST(WorkerTest, ValidRecipient) {
    conan::Data msg1;
    msg1.mutable_header()->set_recipient("library");
    msg1.set_content("content1");
    auto resp1 = conan_example::do_work(msg1);
    EXPECT_STREQ(resp1.header().sender().c_str(), "library");
}

TEST(WorkerTest, InvalidRecipient) {
    conan::Data msg1;
    msg1.mutable_header()->set_recipient("not-library");
    msg1.set_content("content1");
    auto resp1 = conan_example::do_work(msg1);
    EXPECT_STREQ(resp1.content().c_str(), "Wrong message received");
}
