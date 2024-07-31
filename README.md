# meson-test-project
```bash
meson setup build
```
new build dir created 
```bash
rustam@rustam-ZenBook-UX431DA-UM431DA:~/meson-test-project$ tree build/
build/
├── build.ninja
├── compile_commands.json
├── meson-info
│   ├── intro-benchmarks.json
│   ├── intro-buildoptions.json
│   ├── intro-buildsystem_files.json
│   ├── intro-dependencies.json
│   ├── intro-installed.json
│   ├── intro-install_plan.json
│   ├── intro-projectinfo.json
│   ├── intro-targets.json
│   ├── intro-tests.json
│   └── meson-info.json
├── meson-logs
│   └── meson-log.txt
├── meson-private
│   ├── build.dat
│   ├── cmd_line.txt
│   ├── coredata.dat
│   ├── install.dat
│   ├── meson_benchmark_setup.dat
│   ├── meson.lock
│   ├── meson_test_setup.dat
│   ├── sanitycheckcpp.cc
│   └── sanitycheckcpp.exe
├── meson_test_project.p
├── subprojects
│   └── googletest-1.15.0
│       ├── googlemock
│       └── googletest
└── tests
    └── gtest-all.p

```

```bash
meson configure -Dcpp_std=c++20 build
meson compile -C build
```
```bash 
rustam@rustam-ZenBook-UX431DA-UM431DA:~/meson-test-project$ tree build/
build/
├── build.ninja
├── compile_commands.json
├── meson-info
│   ├── intro-benchmarks.json
│   ├── intro-buildoptions.json
│   ├── intro-buildsystem_files.json
│   ├── intro-dependencies.json
│   ├── intro-installed.json
│   ├── intro-install_plan.json
│   ├── intro-projectinfo.json
│   ├── intro-targets.json
│   ├── intro-tests.json
│   └── meson-info.json
├── meson-logs
│   └── meson-log.txt
├── meson-private
│   ├── build.dat
│   ├── cmd_line.txt
│   ├── coredata.dat
│   ├── install.dat
│   ├── meson_benchmark_setup.dat
│   ├── meson.lock
│   ├── meson_test_setup.dat
│   ├── sanitycheckcpp.cc
│   └── sanitycheckcpp.exe
├── meson_test_project
├── meson_test_project.p
│   └── meson_test_project.cpp.o
├── subprojects
│   └── googletest-1.15.0
│       ├── googlemock
│       └── googletest
└── tests
    ├── gtest-all
    └── gtest-all.p
        └── gtest-all.cpp.o

10 directories, 26 files

```
test target 
```bash
meson test -C build/
```
```bash 
rustam@rustam-ZenBook-UX431DA-UM431DA:~/meson-test-project$ meson test -C build/
ninja: Entering directory `/home/rustam/meson-test-project/build'
ninja: no work to do.
1/1 gtest tests        OK              0.01s


Ok:                 1   
Expected Fail:      0   
Fail:               0   
Unexpected Pass:    0   
Skipped:            0   
Timeout:            0   

Full log written to /home/rustam/meson-test-project/build/meson-logs/testlog.txt
rustam@rustam-ZenBook-UX431DA-UM431DA:~/meson-test-project$ tree build/meson-logs/
build/meson-logs/
├── meson-log.txt
├── testlog.json
├── testlog.junit.xml
└── testlog.txt

0 directories, 4 files

```
run application target
```bash
 ./build/meson_test_project
```