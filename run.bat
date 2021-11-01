@REM echo %1 
@REM echo %2 
@REM echo %3

g++ -x c++ -Wall -Wextra -pedantic -Werror=return-type -Winvalid-pch -Wno-unused-parameter -std=c++17 -O2 -static -pipe -o "hsnu"  "%1"
.\hsnu.exe