#pragma once
#include <string>
#include <vector>
#include <algorithm>

class SuffixArray {
  public:
    SuffixArray(const std::string& str);
    std::pair<int, int> getMatch(const std::string& query);
    void print() const;
  private:
    class Suffix;
    std::vector<Suffix> suffixes;

    int lcp(const Suffix& a, const Suffix& b) const;
    int lcp(const std::string& a, const std::string& b, const int& index) const;
};

class SuffixArray::Suffix {
  public:
    std::string val;
    int index;
    int lcp;
    Suffix(std::string val, int index) : val(val), index(index), lcp(0) {}

    std::string print() const {
      return this->val;
    }

    int length() const {
      return this->val.size();
    }

    bool operator<(const Suffix& other) const {
      return this->val < other.val;
    }
};