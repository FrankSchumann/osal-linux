# osal-linux
Operating System Abstraction Layer for Linux

## Build

```bash
osal-linux $ mkdir build && cd build
osal-linux $ cmake ..
osal-linux $ cmake --build . 
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

