# osal-linux
Operating System Abstraction Layer for Linux

## Build

```bash
osal-linux $ mkdir build && cd build
osal-linux $ cmake .. -DBUILD_SHARED_LIBS=ON
osal-linux $ cmake --build . -- -j4
```
## Conan
Install package to Conan cache.

```bash
osal-linux $ conan create . 
```
Build package in local directory.

```bash
osal-linux $ conan build . 
```


## Git
Delete all ignored/created files.

```bash
osal-linux $ git clean -fxd
```

