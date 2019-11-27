# Installing *SFML* and the gcc-compiler
## Windows

1.  Download and extract [MinGW Builds 7.3.0 (64-bit)](https://sourceforge.net/projects/mingw-w64/files/Toolchains%20targetting%20Win64/Personal%20Builds/mingw-builds/7.3.0/threads-posix/seh/x86_64-7.3.0-release-posix-seh-rt_v5-rev0.7z/download) and the [MinGW GCC 7.3.0 (SEH)](https://www.sfml-dev.org/files/SFML-2.5.1-windows-gcc-7.3.0-mingw-64-bit.zip) version of *SFML*.
2.  Copy the content inside `x86_64-7.3.0-release-posix-seh-rt_v5-rev0` named `mingw64` into your Windows `Program Files` folder.
3.  Rename the folder inside `SFML-2.5.1-windows-gcc-7.3.0-mingw-64-bit` from `SFML-2.5.1` to `SFML` and also copy this folder to your Windows `Program Files` folder.
4.  Open the `Windows Control Panel` and navigate to `System Security` -> `System` -> `Advanced System Settings` -> Tab: `Advanced` -> `Environment Variables...`.
5.  Go to `System variables` and search for the `Path` variable.
6.  Mark the line and click `Edit...`.
7.  Use `Browse...` and search for your `Program Files` folder. Mark the `SFML` directory and click `Ok`.
8.  Also search for the `mingw64` folder, mark the subdirectory `bin` and click `Ok`.
9.  Close all unnecessary windows.

## Linux

1.  Install the standard `gcc` compiler with the general debugger `gdb` and also `cmake`.
2.  Search in your repositories for the `SFML`package and install it.
    If there is no package for you, download the *SFML* package directly from the official [website](https://www.sfml-dev.org/download/sfml/2.5.1/).
3.  Insert the files inside the folder `SFML-2.5.1` in `/usr` with root privileges.
    (like so: `/usr/include/SFML/...`, `/usr/lib/libsfml-audio.so`, `/usr/lib/...`, `/usr/share/SFML/...`)

## macOS

[...]

# Compiling in *CLion* via *CMake*

1.  Start the *CLion* IDE and look for the **Toolchains** under `File` -> `Settings` -> `Build, Execution, Deployment` -> `Toolchains`.
     - For Windows use the `MinGW` environment (default option).
     - For Linux let *CLion* search for the tools (default option).
2.  Select the current project.
3.  Wait for *CMake* to generate the *CMakeCache*.
    If this does not happen go to the **CMake** tab and click the **Refresh** button.
4.  Wait for *CLion* to index all Header files.
5.  Click the play button and enjoy!

Responsible team member: @lrichter