// C++ - Medium

#pragma once
#include <string>

class FileHandler {
public:
    // TODO: Implement the FileHandler class
    static std::string ReadFile(const std::string& filePath);

    
    static bool WriteFile(const std::string& filePath, const std::string& content);

    
    static bool AppendFile(const std::string& filePath, const std::string& content);

    
    static bool FileExists(const std::string& filePath);
};
