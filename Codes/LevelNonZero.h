#ifndef LEVEL_NON_ZERO_H
#define LEVEL_NON_ZERO_H

#include "SSTable.h"
#include "SearchResult.h"
#include <string>
#include <cstdint>
#include <vector>
#include <list>

class LevelNonZero {
public:
    explicit LevelNonZero(const std::string &dir);
    ~LevelNonZero();
    SearchResult search(uint64_t key);
    std::vector<Entry> extract();
    void merge(const std::vector<Entry> &lData, uint64_t &no);
private:
    std::string dir;
    uint64_t size;
    uint64_t lastKey;
    std::list<SSTable> ssTables;
};

#endif