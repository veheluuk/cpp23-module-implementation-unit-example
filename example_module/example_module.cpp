module;
#include <cmath>
#include <print>
module example_module;

float example_function(float x)
{
    return std::sinf(x);
}

void example_class::do_something()
{
    std::print("{}\n", example_function(10));
}
