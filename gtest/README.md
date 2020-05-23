# Meson Evaluation - Unit Tests using Google Test

This example uses Google Test to demonstrate definition and execution of unit tests as well as definition of external dependencies.

## Prerequisites

Make sure that Google Test is installed on the system. Version 1.10.0 or higher is required.

## Build and Run

    meson build
    cd build
    meson test

## Execute test with valgrind

Make sure that valgrind is installed.

    sudo apt install valgrind

Build and run tests:

    meson build
    cd build
    meson test --wrap='valgrind --error-exitcode=42'

_Note: valgrind does not change return code on errors by default._

## Further Information

*   [https://mesonbuild.com/Dependencies.html](https://mesonbuild.com/Dependencies.html): Meson Manual - Dependencies
*   [https://mesonbuild.com/Unit-tests.html](https://mesonbuild.com/Unit-tests.html): Meson Manual - Unit Tests
*   [http://valgrind.org/docs/manual/manual-core.html](http://valgrind.org/docs/manual/manual-core.html): Valgrind Cor Manual