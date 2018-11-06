cmake_minimum_required(VERSION 3.1)

# Generate protobuffers
file(GLOB PROTO_FILES ${CMAKE_CURRENT_SOURCE_DIR}/*.proto)
protobuf_generate_cpp(PROTO_SRCS PROTO_HDRS ${PROTO_FILES})

source_group("Include Files" FILES ${PROTO_HDRS})
add_library(messages ${PROTO_SRCS} ${PROTO_HDRS} ${PROTO_FILES})
#target_compile_definitions(messages PUBLIC PROTOBUF_USE_DLLS)
#generate_export_header(messages EXPORT_FILE_NAME ${CMAKE_CURRENT_BINARY_DIR}/include/messagesAPI.h)
target_include_directories(messages PUBLIC ${Protobuf_INCLUDE_DIRS})
target_link_libraries(messages PUBLIC ${Protobuf_LIBRARIES})
