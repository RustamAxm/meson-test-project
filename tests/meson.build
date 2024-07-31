gtest_proj = subproject('gtest')
gtest_dep = gtest_proj.get_variable('gtest_dep')
gmock_dep = gtest_proj.get_variable('gmock_dep')

tests_src = [
  'gtest-all.cpp',
]
e = executable(
  'gtest-all',
  tests_src,
  dependencies : [
    gtest_dep,
    gmock_dep],
)

test('gtest tests', e)