// Build with:
// emcc -I${EMSCRIPTEN}/system/include --bind -o hello-emscripten.html hello-emscripten.cpp

#include <iostream>
#include <emscripten/bind.h>

using namespace std;
using namespace emscripten;

float lerp(float a, float b, float t)
{
    return (1 - t) * a + t * b;
}

EMSCRIPTEN_BINDINGS(my_module)
{
    emscripten::function("lerp", &lerp);
}