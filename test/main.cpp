//
// Created by Mpho Mbotho on 2021-01-15.
//

#define CATCH_CONFIG_RUNNER

#include "catch2/catch.hpp"

int main(int argc, const char *argv[])
{
    int result = Catch::Session().run(argc, argv);
    return (result < 0xff ? result: 0xff);
}
