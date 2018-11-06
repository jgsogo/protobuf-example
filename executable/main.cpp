
#include <iostream>

#include "messages/data.pb.h"
#include "../library/worker.h"


int main() {
    std::cout << "CONAN protobuf-example\n";

    // Message to the library
    conan::Data msg1;
    msg1.mutable_header()->set_sender("executable");
    msg1.mutable_header()->set_recipient("library");
    msg1.set_content("main msg1");
    
    auto response1 = conan_example::do_work(msg1);
    std::cout << response1.DebugString() << std::endl;

    // Check the if/else inside the library
    conan::Data msg2;
    msg2.mutable_header()->set_sender("executable");
    msg2.mutable_header()->set_recipient("otherlib");
    msg2.set_content("main msg2");

    auto response2 = conan_example::do_work(msg2);
    std::cout << response2.DebugString() << std::endl;
}
