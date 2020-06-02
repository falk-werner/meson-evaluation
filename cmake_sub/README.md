# Meson Evaluation - Use external CMake project as subproject

This exmaple shows how to integrate external CMake projects
as subprojects.

## Build and Run

    meson build
    cd build
    ninja
    ./lws_print_version

## Print availble targets

Sometimes it is hard to find the right target, that can be used
as dependency. Add the following lines to the `meson.build` file
to print available targets:

    lws = cmake.subproject('libwebsockets')
    foreach target: lws.target_list()
      message(target)
    endforeach

## Further Information

*   [https://mesonbuild.com/CMake-module.html](https://mesonbuild.com/CMake-module.html): Meson Manual - CMake module