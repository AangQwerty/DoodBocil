#include <iostream>
#include <sys/stat.h>
#include <sys/types.h>

int main() {
    std::string folderName;

    std::cout << "[!] Masukkan nama folder yang ingin dibuat: ";
    std::getline(std::cin, folderName);

    // Membuat folder
    if (mkdir(folderName.c_str(), 0777) == 0) {
        std::cout << "[√] Folder berhasil dibuat: " << folderName << std::endl;
    } else {
        std::cerr << "[×] Gagal membuat folder: " << folderName << std::endl;
    }

    return 0;
}