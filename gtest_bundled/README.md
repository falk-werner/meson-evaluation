# Meson Evaluation - Bundle Google Test

This example shows how to deal with external dependencies.  

## Build and Run

    meson build
    cd build
    meson test

## Notes

There are a few lines commented out in `meson.build` file.  
Since the prefered behavior is to use installed libraries when possible 
and fall back to bundled ones when needed, one should use the built-in
short form:

    <library>_dep = depencency('<library>', fallback: ['<library>', '<library>_dep'])

## Further Information

*   [https://mesonbuild.com/Subprojects.html](https://mesonbuild.com/Subprojects.html): Meson Manual - Subprojects
*   [https://mesonbuild.com/Wrap-dependency-system-manual.html](https://mesonbuild.com/Wrap-dependency-system-manual.html): Meson Manual - Wrap dependencies
*   [https://wrapdb.mesonbuild.com/](https://wrapdb.mesonbuild.com/): WrapDB - Wrap files for existing libraries