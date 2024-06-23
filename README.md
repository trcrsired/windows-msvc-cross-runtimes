# Windows Sysroot

This repository provides Windows headers and libraries with a standardized sysroot rule as what GCC and clang do, similar to other triplets, to facilitate cross-compilation and canadian-compilation.

## Planned Enhancements to LLVM/clang
I intend to modify the clang frontend to support the ```--sysroot=``` option, enabling it to locate this sysroot using path finding as demonstrated below.

## Supported Triplets
i686-windows-msvc

x86_64-windows-msvc

arm-windows-msvc

aarch64-windows-msvc

## Headers
Windows + CRT Headers Include Directory: ```include```

### C++ standard library headers:
With ```-stdlib=stl```, headers should be located in ```include/c++/stl```

With ```-stdlib=libc++```, headers should be located in ```include/c++/v1```

## Libraries
Libraries should be placed in ```lib/$TRIPLET```

For example. on ```x86_64-windows-msvc```, it should find libs in ```lib/x86_64-windows-msvc```

# How to use it right now?

Well, we have to do it manually:

```cpp
// hello.cc
#include<iostream>

int main()
{
      std::cout<<"Hello World\n";
}
```
```
# Suppose the repository is cloned in $HOME on Linux
$ clang++ -o hello.exe hello.cc -O3 -fuse-ld=lld --target=x86_64-windows-msvc -I$HOME/windows-msvc-sysroot/include -I$HOME/windows-msvc-sysroot/include/c++/stl -L$HOME/windows-msvc-sysroot/lib/x86_64-windows-msvc
$ wine ./hello.exe
Hello World
```

I would like to change clang to support the ```--sysroot=``` so that it would trivialize the cmake for cross compiling

```
clang++ -o hello.exe hello.cc -O3 -fuse-ld=lld --target=x86_64-windows-msvc --sysroot=$HOME/windows-msvc-sysroot
```

Also it should support ```-stdlib=libc++```

```
clang++ -o hello.exe hello.cc -O3 -fuse-ld=lld --target=x86_64-windows-msvc --sysroot=$HOME/windows-msvc-sysroot -stdlib=libc++
```

This should equal to

```
# Suppose the repository is cloned in $HOME on Linux
$ clang++ -o hello.exe hello.cc -O3 -fuse-ld=lld --target=x86_64-windows-msvc -I$HOME/windows-msvc-sysroot/include -I$HOME/windows-msvc-sysroot/include/c++/v1 -L$HOME/windows-msvc-sysroot/lib/x86_64-windows-msvc
$ wine ./hello.exe
Hello World
```
