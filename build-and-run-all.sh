set -e
mkdir -p build
cd build
cmake ..
cmake --build .
./templates
./concepts-inheritance