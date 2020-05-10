#define CATCH_CONFIG_RUNNER
#define _USE_MATH_DEFINES
#include <catch.hpp>
#include <cmath>
#include <iostream>



//r ist der Radius h die Höhe
int volumenrechnung(int h , int r) {
    float volumen;
    float oberflaeche;
    double pi = M_PI;
    volumen = pi * (r * r) * h;
    oberflaeche = 2 * pi * r * (r * h);
    std::cout << "das volumen betraegt " << volumen ;
    std::cout << "\n der Wert der Zylinder Oberflaeche betraegt " << oberflaeche;
    return volumen;
    

}







TEST_CASE("describe_volumenrechnung", "[volumenrechnung]")
{
    /* Tests für Zylindervolumen*/
      REQUIRE(volumenrechnung(3,3) == 84,823);
      REQUIRE(volumenrechnung(1,1) == 3,141);
      REQUIRE(volumenrechnung(0,0) == 0);
}






int main(int argc, char* argv[])
{
    volumenrechnung(3,3);
    return Catch::Session().run(argc, argv);

}