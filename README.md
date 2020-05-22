# Meson Evaluation

Play around with Meson build system.

## Use Cases

*   **[hello_world](hello_world):** Simple application
*   **[gtest](gtest):** Execute Unit Tests using Google Test
*   **[gtest_bundled](gtest_bundled):** Use Google Test as external dependency

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

## Further Information

*    [https://mesonbuild.com/](https://mesonbuild.com/): Meson project website