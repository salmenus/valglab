# Valglab

This repository contains source code that showcases memory analysis and thread debugging features of valgrind. The code is **POSIX specific**, and was tested on Ubuntu.

### Compile

To compile examples under the **memory** folder :

> `g++ -g memory/<source file> -o <binary>`

The examples under the **thread** folder use **pthread**. You can you the following command to compile them :

> `g++ -g -pthread thread/<source-file> -o <binary>`

### Memory analysis using `valgrind`

> `valgrind <binary>`

### Thread debugging using `helgrind`

> `valgrind --tool=helgrind <binary>`

### Resources

* http://valgrind.org
* http://valgrind.org/docs/manual/hg-manual.html

