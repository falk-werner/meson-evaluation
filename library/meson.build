project('libfancy', 'c', 'cpp', version: '1.0.0')

gtest_dep = dependency('gtest_main', version: '>=1.10.0', fallback: ['gtest', 'gtest_main_dep'])

libfancy_includes = include_directories('include')

libfancy = library('fancy',
    'src/fancy.c',
    include_directories: libfancy_includes,
    c_args: ['-fvisibility=hidden', '-DFANCY_API=FANCY_EXPORT'],
    version: '1.0.0',
    install: true)

libfancy_dep = declare_dependency(
    include_directories: libfancy_includes,
    link_with: libfancy)

install_subdir('include/fancy', install_dir: 'include')

pkg = import('pkgconfig')
pkg.generate(
    libraries: [libfancy],
    subdirs: '.',
    version: '1.0.0',
    name: 'libfancy',
    filebase: 'fancy',
    description: 'Yet another fancy library.')

alltests = executable('alltests',
    'test/test_fancy.cc',
    dependencies: [libfancy_dep, gtest_dep])

test('alltests', alltests)