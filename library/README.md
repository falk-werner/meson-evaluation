# Meson Evaluation - Library

This example shows how to create a library with Meson.

Features:
*   provide unit tests (search for gtest or use bundled version as fallback)
*   install library, headers and pkg-config file
*   used can choose between building static or shared library (or both)
*   export only symbols of public API (shared library only)
*   declare depencency (library can be directly re-used as subproject in other meson projects)
*   Code coverage

## Build

This will build a shared library.

    meson build
    cd build
    ninja

## Install

    DESTDIR=<path> ninja install

## Build static library

By default, meson will create a shared library. The type of library to create can be specified via `default_library` option.

    meson -Ddefault_library=static build

The following values are supported:

*   **static**: create static library
*   **shared**: create shared library
*   **both**: create both, static and shared library

## Create Code Coverage report

Make sure that `lcov` is installed:

    sudo apt install lcov

Build project:

    meson -Db_coverage=true build

Execute tests and generate coverage report:

    cd build
    meson test
    ninja coverage-html

The generated coverage report can be found at meson-logs/coveragereport/index.html.

_Note: Coverage report includes test code also. There is an [open ticket](https://github.com/mesonbuild/meson/issues/3287) for meson allow user defined excludes_

## References

*   [https://mesonbuild.com/Reference-manual.html#executable](https://mesonbuild.com/Reference-manual.html#executable): Meson Reference - Executable
*   [https://mesonbuild.com/Adding-arguments.html](https://mesonbuild.com/Adding-arguments.html): Meson Manual - adding arguments 
*   [https://mesonbuild.com/Installing.html](https://mesonbuild.com/Installing.html): Meson Manual - Installing
*   [https://mesonbuild.com/Pkg-config-files.html](https://mesonbuild.com/Pkg-config-files.html): Meson Documentation - Generate pkg-config files
