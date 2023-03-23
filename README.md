# osal-linux
Operating System Abstraction Layer for Linux

## Build

```bash
osal-linux $ mkdir build && cd build
osal-linux $ cmake .. -DBUILD_SHARED_LIBS=ON
osal-linux $ cmake --build . -- -j4
```
## Conan

### Create
Build and upload package to Conan cache.

#### Release
```bash
osal-linux $ conan create .
```
#### Debug
```bash
osal-linux $ conan create . -s build_type=Debug
```
### Build
Build package in local directory.

#### Release
```bash
osal-linux $ conan build . 
```

#### Debug
```bash
osal-linux $ conan build . -s build_type=Debug
```

## Test
Build and execute GoogleTest.

```bash
osal-linux/test $ mkdir build
```
```bash
osal-linux/test $ cd build
osal-linux/test/build $ cmake ..
```
```bash
osal-linux/test/build $ cmake --build . -- -j4
```
```bash
osal-linux/test/build $ ./osal-linuxTest
```

## Git
Delete all ignored/created files.

```bash
osal-linux $ git clean -fxd
```

