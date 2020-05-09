#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>

int gcd(int a, int b)
{
    int ergebniss;
    if (a == 0) return b;
    if (b == 0) return a;

    do {
        ergebniss = a % b;
        a = b;
        b = ergebniss;
    } while (b != 0);
    return (a);

}

TEST_CASE("describe_gcd", "[gcd]")
{
    REQUIRE(gcd(2, 4) == 2);
    REQUIRE(gcd(9, 6) == 3);
    REQUIRE(gcd(3, 7) == 1);
}



int main(int argc, char* argv[])
{
  return Catch::Session().run(argc, argv);
}

