#include "double-conversion/double-conversion.h"
#include "test.h"

using namespace double_conversion;

void dtoa_doubleconv(double value, char *buffer) {
  StringBuilder sb(buffer, 26);
  DoubleToStringConverter::EcmaScriptConverter().ToShortest(value, &sb);
}

REGISTER_TEST(doubleconv);
