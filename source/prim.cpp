#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>
#include <iostream>

int prim(int n) {
    bool prim = true;
    
    for (int i = 2; i <= n/2; ++i) {

        if (n % i == 0) {
            prim = false;
            break;
        }
    }
    if (prim == true)
        std::cout << n << "ist eine Primzahl";
    else
        std::cout << n << "ist keine Primzahl";
    return 0;
    
}

TEST_CASE("describe_prim", "[prim]")
{
    /* Tests für Primzahlen*/
    REQUIRE(prim(2) == true);
    REQUIRE(prim(3) == true);
    REQUIRE(prim(10) == false);
    REQUIRE(prim(12) == false);
    REQUIRE(prim(14) == false);
    REQUIRE(prim(16) == false);
    REQUIRE(prim(13) == true);
    REQUIRE(prim(11) == true);
    REQUIRE(prim(7) == true);
}


int main(int argc, char* argv[])
{
    prim(11);
    return Catch::Session().run(argc, argv);
   
}