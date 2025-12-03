set shell := ["bash", "-cu"]

clean:
    rm -rf build

make:
    cmake -B build
    cmake --build build

test: make
    cd build && ctest -V

all: clean make test

