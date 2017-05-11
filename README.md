# Introduction
This repository correlates to the coding exercises in the book ["C++ Primer Plus - 5th Edition"](http://a.co/e7rwDAx) by Stephen Prata. I've been teaching myself C++ and feel there _could_ be some benefit in publishing these example snippets. For each snippet of code, I've added a "Topics" comment at the top of the file. This should allow users curious about learning C++ to simply use github to search for various topics. Also, experienced programmers who are newcomers to C++ can most likely read through the code snippets without the added context of the book to learn how to utilize various C++ features and functionality. 

## Contributing
I don't plan on doing every single programming exercise in the book. If someone else would like to contribute responses to these example problems or correct any possible mistakes in my code, please adhere to the coding, directory, and comment structure found in the source files and submit a PR. 

_Please note that some of the earlier programming exercises require that the user solve the problem in a suboptimal way in order to demonstrate the topics covered in the chapter (such as looping multiple times when one loop would suffice or using c-style strings when the string class would be a better approach)._

## Compatability
All code was compiled and tested on a Mac using g++:
```
natey@mba CPP/cpp_primer_plus_fifth_edition (master) » g++ -v                                                                                                                                                                                                1 ↵
Configured with: --prefix=/Applications/Xcode.app/Contents/Developer/usr --with-gxx-include-dir=/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.12.sdk/usr/include/c++/4.2.1
Apple LLVM version 8.0.0 (clang-800.0.42.1)
Target: x86_64-apple-darwin15.6.0
Thread model: posix
InstalledDir: /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin
```
