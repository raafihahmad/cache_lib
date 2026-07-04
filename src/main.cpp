#include <iostream>
#include "cache.hpp"

int main() {
    Cache cache;
    std::cout<<"Setting name as raafih"<<std::endl;
    cache.set("name", "raafih");
    std::cout<<"Try to get the cache name"<<std::endl;
    std::cout<<"name: "<< cache.get("name");
    
    return 0;
}
