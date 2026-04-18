#include "main/ingestion/MarketDataParser.hpp"

#include <fstream>
#include <string>

namespace cmf {

std::size_t
MarketDataParser::parseFile([[maybe_unused]] const std::string &filePath,
                            [[maybe_unused]] EventCallback callback) {
  // TODO: open file, read line-by-line, call parseLine, invoke callback
  return 0;
}

bool MarketDataParser::parseLine([[maybe_unused]] std::string_view line,
                                 [[maybe_unused]] MarketDataEvent &outEvent) {
  // TODO: JSON parsing — extract fields into outEvent
  return false;
}

NanoTime
MarketDataParser::parseTimestamp([[maybe_unused]] std::string_view tsStr) {
  // TODO: convert ISO-8601 string to nanoseconds since epoch
  return 0;
}

Action MarketDataParser::parseAction([[maybe_unused]] char ch) {
  // TODO: map 'A','M','C','R','T','F','N' to Action enum
  return Action::None;
}

Side MarketDataParser::parseSide([[maybe_unused]] char ch) {
  // TODO: map 'B' -> Buy, 'A' -> Sell, 'N' -> None
  return Side::None;
}

Price MarketDataParser::parsePrice([[maybe_unused]] std::string_view priceStr) {
  // TODO: parse decimal string to double, handle null
  return 0.0;
}

OrderId
MarketDataParser::parseOrderId([[maybe_unused]] std::string_view idStr) {
  // TODO: parse uint64 string
  return 0;
}

} // namespace cmf
