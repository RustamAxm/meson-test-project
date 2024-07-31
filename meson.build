project('meson-test-project', 'cpp',
  version : '0.1',
  default_options : ['warning_level=3'])

gtest_proj = subproject('gtest')
gtest_dep = gtest_proj.get_variable('gtest_dep')
gmock_dep = gtest_proj.get_variable('gmock_dep')

tests_src = [
  'tests/gtest-all.cpp',
]
e = executable(
  'gtest-all',
  tests_src,
  dependencies : [
    gtest_dep,
    gmock_dep],
)
test('gtest tests', e)

