#include <iostream>
#include <cstdlib>

int main(int argc, char* argv[]) {
    if (argc != 5) {
        std::cerr << "Usage: " << argv[0] << " --min_byte <min_bytes> --max_byte <max_bytes>\n";
        return 1;
    }

    int min_bytes = std::stoi(argv[2]); // Get min_bytes
    int max_bytes = std::stoi(argv[4]); // Get max_bytes

    if (min_bytes > max_bytes) {
        std::cerr << "Minimum byte number cannot be larger than maximum byte number.\n";
        return 1;
    }

    char c;
    int byte_count = 0;
    std::string result;

    while (std::cin.get(c)) {
        byte_count++;
        if (byte_count > min_bytes && byte_count <= max_bytes) {
            result += c;
        }
    }

    if (byte_count < min_bytes) {
        std::cerr << "Input is less than minimum byte number.\n";
        return 1;
    }

    std::cout << result << '\n';
    return 0;
}