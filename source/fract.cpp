#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <iostream>


float fract ()




TEST_CASE("describe_fract", "[fract]")
{
   /* Tests für den Nachkommaanteil einer Gleitkommazahl*/
    REQUIRE(fract(78) == Approx 2);
    REQUIRE(fract() == 3);
    REQUIRE(fract() == 1);
}












int main(int argc, char* argv[])
{
  
   return Catch::Session().run(argc, argv);

}