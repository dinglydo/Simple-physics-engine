# Simple-physics-engine
It's a very simple physics engine. Very early. Work in progress.
EDIT: Massive change. I've decided that I'll write this engine in C instead of C++, once I do continue writing it anyway.

# How do I build this?
First, as of now, this project only supports the MSVC compiler. This is simply due to my personal preference towards batch files. Fortunately, however, most C++ Windows developers have Visual Studio, which means they have MSVC.

## Access to CL
The "build.bat" batch files assume they have access to cl, if they do not, they will make no attempt to compile.

There are two ways of giving access to cl. You can either run the batch files using the developer command prompt provided by VS, or add vcvarsall to the path so that the batch file can replicate the developer command prompt. I personally prefer the latter option.

vcvarsall is usually stored in:

Program Files (x86) -> Microsoft Visual Studio -> 2019 -> Community -> VC -> Auxiliary -> Build.

Different versions might have different paths.

## Building
Currently, there are only two projects you can build. You can build Sandbox by running the build.bat inside the Sandbox directory, or you can build the Physics Engine Test project by running the build.bat inside that directory. To run the application, simply run run.bat.

# Dependencies
While the core physics engine itself has no dependencies, the sandbox depends on SDL2 and the Physics Engine Test depends on gtest.
