project('gtest_bundled', 'c', 'cpp')

includes = include_directories('include')

# Note:
#   Uncomment the following lines to prefer installed gtest
#   and fallback to bundled version on demand.

# gtest_dep = dependency('gtest_main', version: '>=1.10.0')
# if not gtest_dep.found()
    gtest = subproject('gtest')
    gtest_dep = gtest.get_variable('gtest_main_dep')
# endif

# Note:
#   Alternativly the following short form can be used:
#
#gtest_dep = dependency('gtest_main', version: '>=1.10.0', fallback: ['gtest', 'gtest_main_dep'])

libfancy = library('fancy',
    'src/fancy.c',
    include_directories: includes)

alltests = executable('alltests',
    'test/test_fancy.cc',
    include_directories: includes,
    link_with: libfancy,
    dependencies: [gtest_dep])

test('alltests', alltests)