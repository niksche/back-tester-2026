#include "main/ingestion/MarketDataParser.hpp"

#include <fstream>
#include <string>

namespace cmf {

std::size_t MarketDataParser::parseFile(const std::string &filePath,
                                        EventCallback callback) {
  // TODO: open file, read line-by-line, call parseLine, invoke callback
  return 0;
}

bool MarketDataParser::parseLine(std::string_view line,
                                 MarketDataEvent &outEvent) {
  // TODO: JSON parsing — extract fields into outEvent
  return false;
}

NanoTime MarketDataParser::parseTimestamp(std::string_view tsStr) {
  // TODO: convert ISO-8601 string to nanoseconds since epoch
  return 0;
}

Action MarketDataParser::parseAction(char ch) {
  // TODO: map 'A','M','C','R','T','F','N' to Action enum
  return Action::None;
}

Side MarketDataParser::parseSide(char ch) {
  // TODO: map 'B' -> Buy, 'A' -> Sell, 'N' -> None
  return Side::None;
}

Price MarketDataParser::parsePrice(std::string_view priceStr) {
  // TODO: parse decimal string to double, handle null
  return 0.0;
}

OrderId MarketDataParser::parseOrderId(std::string_view idStr) {
  // TODO: parse uint64 string
  return 0;
}

} // namespace cmf
