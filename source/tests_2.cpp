#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>

long factorial( long n) {
    long produkt;
    if (n == 0) {
        return 1;
       
    }
    else {
      produkt = n* (factorial(n - 1));
     
      
    }
    std::cout << "\n";
    std::cout << produkt;
    return produkt;
}


long factorial_for(long n) {
    long produkt;
    produkt = 1;
    if (n == 0) {
        return 1;
    }
    for (int i=1; i <= n; i++) {
        produkt = produkt * i;
    }
    std::cout << produkt;
    return produkt;
}




//TEST_CASE("describe_factorial", "[factorial]")
//{
//    /* Tests für Fakultät*/
//    REQUIRE(factorial(0) == 1);
//    REQUIRE(factorial(1) == 1);
//    REQUIRE(factorial(2) == 2);
//    REQUIRE(factorial(3) == 6);
//    REQUIRE(factorial(10) == 3628800);
//}




long main(long argc, char* argv[])
{
  /*  factorial(11);*/
  /*  return Catch::Session().run(argc, argv);*/
    factorial_for(5);
}