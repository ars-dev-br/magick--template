# Magick++-Template

This is a simple project template for compiling a project that uses
ImageMagick++.  Remember to replace the its name in CMakeLists.txt and the
executable name.

My suggested way of working with it (so it doesn't pollute neither the root nor
the src folders) is to `cd` into build and then compile:

~~~~
cd build
cmake ..
make
./template
~~~~

If everything went fine, you should see an `output.png` file (an empty, white
figure).

