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

## CMake module vs WrapDB

To integrate an external project as a subproject, there are two
mechanisms available:

*   **[WrapDB](https://mesonbuild.com/Adding-new-projects-to-wrapdb.html)** and
*   **[CMake module](https://mesonbuild.com/CMake-module.html)**

I had [a little talk](https://github.com/mesonbuild/meson/issues/7244) with one of the maintainers about that.
To integrate an external CMake project it is recommended to use the CMake module. Therefore one should be
aware of the [official disclaimer](https://mesonbuild.com/Mixing-build-systems.html) when mixing build
systems with meson and the latest versions of `meson` and `cmake` should be used.

However, there are available wraps for some popular libraries available at
[WrapDB](https://wrapdb.mesonbuild.com/). Therefore, it is definitely worth a look.

## Further Information

*   [https://mesonbuild.com/CMake-module.html](https://mesonbuild.com/CMake-module.html): Meson Manual - CMake module
*   [https://mesonbuild.com/Adding-new-projects-to-wrapdb.html](https://mesonbuild.com/Adding-new-projects-to-wrapdb.html): Meson Documentation - WrapDB
*   [https://mesonbuild.com/Mixing-build-systems.html](https://mesonbuild.com/Mixing-build-systems.html): Meson Documentation - Mixing Build Systems