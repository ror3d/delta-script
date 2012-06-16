# Delta Scripting Language

Visit [the Wiki](https://github.com/rcrmn/delta-script/wiki) for syntax and language information.


## Compiling

To compile, you need [CMake](http://www.cmake.org/) and [Flex](http://flex.sourceforge.net/)

Only tested under mac. Should work under linux. No promises under windows. For [windows Flex try here](http://gnuwin32.sourceforge.net/packages/flex.htm).

Now, to compile, run:
```
$ cd /path/to/the/root/dir
$ cmake .
$ make
```

This should create an executable named `delta` in the same directory.


In the future the ability to create static and dynamic libraries (and dlls) will be added, but for now only the executable-product compilation works.


## Contributors

 * [rcrmn](https://github.com/rcrmn) (Roc)


