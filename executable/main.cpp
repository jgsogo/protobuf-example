
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
    
    auto response = conan_example::do_work(msg1);
    std::cout << response.DebugString() << std::endl;

}
