#pragma once

#include <string>
#include <unordered_map>

class Cache {
    public:
        Cache();
        ~Cache();

        void set(const std::string& key, const std::string& value);

        std::string get(const std::string& key);

    private:
        std::unordered_map<std::string, std::string> cache;
};
