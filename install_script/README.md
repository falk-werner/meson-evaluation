# Meson Evaluation (use custom install script)

_Note: This is currently under discussion, since there is some
strange behaviour regarding `MESON_SOURCE_ROOT` (see below)._

Meson allows it to specify a custom install script by using 
[meson.add_install_script](https://mesonbuild.com/Reference-manual.html#meson-object).

## Build and Install (Fails)

    > meson build
    > cd build
    > DESTDIR=`realpath .` ninja install
    [0/1] Installing files.
    Running custom install script '/bin/sh /home/user/src/meson-evaluation/install_script/subprojects/utils/install_helper.sh'
    MESON_SOURCE_ROOT: /home/user/src/meson-evaluation/install_script
    cp /home/user/src/meson-evaluation/install_script/utils.conf /home/user/src/meson-evaluation/install_script/build/usr/local/etc/utils.conf
    cp: Aufruf von stat für '/home/user/src/meson-evaluation/install_script/utils.conf' nicht möglich: Datei oder Verzeichnis nicht gefunden
    FAILED: meson-install 
    /home/user/.local/bin/meson install --no-rebuild
    ninja: build stopped: subcommand failed.

Unfortunately the install step fails, since `MESON_SOURCE_ROOT`
points to the root project (`install_script`) and not, as expected,
to the `utils` suproject.

This really is an issue, since subprojects are typically external projects
included by wrap files.

I first discovered this issue in a _real world_ example:  
[libfuse](https://github.com/libfuse/libfuse) uses a custom install script this
way and therefore, installation fails if libfuse is used as a subproject.

## References

*   [https://mesonbuild.com/Reference-manual.html#meson-object](https://mesonbuild.com/Reference-manual.html#meson-object): Meson Reference - meson object
