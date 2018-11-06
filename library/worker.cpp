
#include "worker.h"

namespace conan_example {

    conan::Data do_work(const conan::Data& input) {
        conan::Data ret;
        ret.mutable_header()->set_sender("library");
        ret.mutable_header()->set_recipient("outside-library");
        if (input.header().recipient() == "library") {
            ret.set_content("Response to '" + input.content() +"'");
        }
        else {
            ret.set_content("Wrong message received");
        }
        return ret;
    }

}
