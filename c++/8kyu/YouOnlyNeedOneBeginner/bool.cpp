#include <vector>
#include <string>

bool check(const std::vector<std::string>& seq, const std::string& elem) {
  for (auto& i: seq) if (i == elem) return true;  
  return false;
}
