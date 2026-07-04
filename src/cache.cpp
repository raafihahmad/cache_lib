#include "cache.hpp"

Cache::Cache() = default;

Cache::~Cache() = default;

void Cache::set(const std::string& key, const std::string& value) {
    cache[key] = value;
}

std::string Cache::get(const std::string& key) {
    auto it = cache.find(key);

    if (it != cache.end()) {
        return it->second;
    }

    return "";
}
