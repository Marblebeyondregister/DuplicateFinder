#include "DuplicateScanner.h"
#include <filesystem>

std::vector<std::string> DuplicateScanner::ScanFolder(const std::string& path)
{
    std::vector<std::string> files;

    for (const auto& entry : std::filesystem::recursive_directory_iterator(path))
    {
        if (entry.is_regular_file())
        {
            files.push_back(entry.path().string());
        }
    }

    return files;
}
