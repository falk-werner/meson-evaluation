project('lib_with_gtest', 'c', 'cpp')

includes = include_directories('include')

gtest = dependency('gtest_main', version: '>=1.10.0')

libfancy = library('fancy',
    'src/fancy.c',
    include_directories: includes)

alltests = executable('alltests',
    'test/test_fancy.cc',
    include_directories: includes,
    link_with: libfancy,
    dependencies: [gtest])

test('alltests', alltests)