# Container `Deque` for C Calculator's operation

This is a library for working with arithmetic operations in different types of C calculators.

## Build

To build the library, simply run the following command:

```
cmake -S . -B ./build
cmake --build ./build
```

This will create a static library file `Deque.a` in the `./lib` folder.

## Usage

To use this library in your C calculator project, simply include the `deque.h` header file and link against the `Ddeque.a` library file:

```
#include <stdio.h>
#include "deque.h"

int main() {
    Deque* deque = init_deque();
    d_push_f(deque, NUMBER, 42.0);
    double value;
    d_get_number_f(deque, &value);
    printf("%f\n", value);
    return 0;
}
```

## Dependencies

This library has no external dependencies.

## Development

To contribute to this library, please follow the steps below:

1. Clone this repository: `git clone https://github.com/Astrodynamic/Container-Deque-for-C-Calculator-s-operation`
2. Build the library: `cmake -S . -B ./build`
3. Make changes to the library source files in `./src`
4. Submit a pull request

## License

This library is licensed under the MIT License. See the [LICENSE](LICENSE) file for more information. 

---

### Example with Other Projects

If you want to use this library in another project, you can add it as a submodule and include it in your CMakeLists.txt file:

```cmake
# Add the deque library as a submodule
git submodule add https://github.com/Astrodynamic/Container-Deque-for-C-Calculator-s-operation

# Add the library to your project
add_subdirectory(arithmetic-library)

# Link against the library
target_link_libraries(my_calculator PRIVATE deque)
```
