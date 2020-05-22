# Meson Evaluation

Play around with Meson build system.

## Examples

*   **[hello_world](hello_world):** Simple application
*   **[gtest](gtest):** Execute Unit Tests using Google Test
*   **[gtest_bundled](gtest_bundled):** Use Google Test as external dependency
*   **[library](library):** Create a library

## Preparations

Install Meson and Ninja.

    sudo apt update
    sudo apt install python3 python3-pip python3-setuptools python3-wheel ninja-build
    pip3 install --user meson

Note: Make sure, meson executable is available in PATH.

## Build

    cd <project>
    meson build
    cd build
    ninja

## Investigated Use Cases

| Use Case                       | Shown in Example               | Result                 |
| ------------------------------ | ------------------------------ | ---------------------- |
| Create executable              | [hello_world](hello_world)     | works                  |
| Use pre-installed library      | [gtest](gtest)                 | works                  |
| Bundle external library        | [gtest_bundled](gtest_bundled) | works                  |
| Execute Unit Tests             | [gtest](gtest)                 | works                  |
| Create static library          | [library](library)             | works                  |
| Create shared library          | [library](library)             | works                  |
| Generate pkg-config file       | [library](library)             | works                  |
| Install library, headers, etc. | [library](library)             | works                  |
| Generate coverage report       | [library](library)             | works                  |
| Specify preprocessor defines   | [library](library)             | works                  |
| Generate source package        | _not shown_                    | restricted (see below) |
| Generate debian package        | _not shown_                    | not found (see below)  |

### Generate source package

CMake allows to create source packages via CPack.

Meson comes with a similar feature, described within the meson manual: [creating release](https://mesonbuild.com/Creating-releases.html). But this feature is limited to `git` and `mercurial` projects and forces a specific project
layout (at least for `git` projects).

### Generate debian package

CMake allows to create debian packages via CPack.

There was only a short investigation, whether Meson supports a similar feature - it is highly
possible, that I missed something. Please contact me, if I'm wrong, but it seems that there
no such feature in Meson.

Generation of debian packages is mentioned on the page [Installing](https://mesonbuild.com/Installing.html#destdir-support) within the Meson manual.

### Use Cases not investigated (yet)

*   [Shipping prebuild binaries](https://mesonbuild.com/Shipping-prebuilt-binaries-as-wraps.html#page-description)
*   [Generating source code](https://mesonbuild.com/Generating-sources.html)
*   [Custom build targets](https://mesonbuild.com/Custom-build-targets.html)
*   [Set compiler options](https://mesonbuild.com/Builtin-options.html)

## Further Information

*    [https://mesonbuild.com/](https://mesonbuild.com/): Meson project website