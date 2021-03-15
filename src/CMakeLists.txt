set(LIB_SOURCES
    SomethingToTest.cpp
)

ADD_LIBRARY(
    CMakeTestbedLib STATIC
    ${LIB_SOURCES}
)

add_executable(CMakeTestbed
    main.cpp
)

target_include_directories(CMakeTestbed PUBLIC
    ../libs
)

target_link_libraries (CMakeTestbed
    fmt
    nlohmann_json::nlohmann_json
    CMakeTestbedLib
)
