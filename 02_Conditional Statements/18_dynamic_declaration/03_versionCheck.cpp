#include <iostream>

int main()
{
    // Print the C++ standard version
    std::cout << "C++ version: " << __cplusplus << std::endl;

// Print the GCC version, if applicable
#ifdef __GNUC__
    std::cout << "GCC version: " << __GNUC__ << "." << __GNUC_MINOR__ << "." << __GNUC_PATCHLEVEL__ << std::endl;
#endif

// Print the Clang version, if applicable
#ifdef __clang__
    std::cout << "Clang version: " << __clang_major__ << "." << __clang_minor__ << "." << __clang_patchlevel__ << std::endl;
#endif

// Print the MSVC version, if applicable
#ifdef _MSC_VER
    std::cout << "MSVC version: " << _MSC_VER << std::endl;
#endif

    return 0;
}