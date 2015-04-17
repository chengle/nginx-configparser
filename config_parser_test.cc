#include "gtest/gtest.h"
#include "config_parser.h"

#include <iostream>
using namespace std;

TEST(NginxConfigParserTest, SimpleConfig) {
  NginxConfigParser parser;
  NginxConfig out_config;

  bool success = parser.Parse("example_config", &out_config);

  EXPECT_TRUE(success);
}

TEST(NginxConfigParserTest, ComplexConfig) {
  NginxConfigParser parser;
  NginxConfig out_config;
  bool success = parser.Parse("complex_config", &out_config);

  EXPECT_TRUE(success);
}

TEST(NginxConfigParserTest, BrokenConfig) {
  NginxConfigParser parser;
  NginxConfig out_config;
  bool success = parser.Parse("broken_config", &out_config);

  EXPECT_FALSE(success);
}

