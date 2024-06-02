#include <iostream>
#include <ranges>
#include <concepts>

using std::cout;
using std::endl;
using std::ranges::range_value_t;

void my_for_each(std::ranges::input_range auto&& r,
                std::invocable<range_value_t<decltype(r)>> auto func) {
    // TODO: implement
    (void)r;
    (void)func;
}

int main() {
    int arr[] = {1, 2, 4};
    my_for_each(arr, [](int i){cout << i << ' ';});
}
