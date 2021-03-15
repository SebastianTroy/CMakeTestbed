set(TEST_SOURCES
    main.cpp
    JsonTest.cpp
    SomethingToTestTests.cpp
)

add_executable(Tests
    ${TEST_SOURCES}
)

target_include_directories(Tests PUBLIC
    ../libs
    ../src
)

target_link_libraries (Tests
    Catch2::Catch2
    fmt
    nlohmann_json::nlohmann_json
    CMakeTestbedLib
)
