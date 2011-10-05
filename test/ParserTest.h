#ifndef PARSERTEST_H
#define PARSERTEST_H

#include <cppunit/extensions/HelperMacros.h>

class ParserTest : public CppUnit::TestFixture
{

  CPPUNIT_TEST_SUITE( ParserTest );
  CPPUNIT_TEST( testGetCoordinate );
  CPPUNIT_TEST( testSetGetCurrentAirspace );
  CPPUNIT_TEST_SUITE_END();

public:
  void setUp();
  void tearDown();

  void testGetCoordinate();
  void testSetGetCurrentAirspace();

};

#endif // PARSERTEST_H
