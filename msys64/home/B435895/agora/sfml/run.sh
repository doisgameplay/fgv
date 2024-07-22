g++ -c 3d.cpp -Isrc/include

mkdir executables

g++ 3d.o -o executables/3d.exe -Lsrc/lib -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio


./executables/3d.exe


