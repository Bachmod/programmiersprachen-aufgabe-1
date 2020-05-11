#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>


//Berrechnung des größten gemeinsamen Teilers zweier Zahlen
int gcd(int a, int b)
{
    int ergebniss;
   /* variablenübergabe Test
    std::cout << a;
    std::cout << b;*/
    if (a == 0) {

        std::cout << b;
        return b;
    }
    if (b == 0) {

        std::cout << a;
        return a;
    }
    if (a == 0 && b == 0) {

        std::cout << "fehler";
        return 0;
    }
    
    
        
    do {
        ergebniss = a % b;
        a = b;
        b = ergebniss;
    } 
    while (b != 0);
    std::cout << a;
    return (a);
    

}

int checksum(int eingabe)
{
    int quersumme;
    quersumme = 0;
    //lv laufvariable 
    int lv;
    while (eingabe > 0) {
        lv = eingabe % 10;
        quersumme = quersumme + lv;
        eingabe = eingabe - lv;
        eingabe = eingabe / 10;
    }
        std::cout << quersumme;
        return quersumme;
        

 }



int sum_multiples(){

 int summe;
 summe = 0;
    for (int i = 0; i < 1001; i++) {
        if (i % 5 == 0) {
            summe = summe + i;
        }
        if (i % 3 == 0) {
            summe = summe + i;
            /*std::cout << summe;*/
        }  
        
    }

    std::cout << summe;
    return summe;
}


int sum_multipleszusatz(int counter)
{
int summe;
summe = 0;
    for (int i = 0; i <= counter; i++) {
            if (i % 5 == 0) {
                summe = summe + i;
            }
            if (i % 3 == 0) {
                summe = summe + i;
            }
            std::cout << summe;
            return summe;
   
    }
    std::cout << summe;
    return summe;
}






//Tests

//TEST_CASE("describe_gcd", "[gcd]")
//{
//   /* Tests für größten gemeinsamen Teiler*/
//    REQUIRE(gcd(2, 4) == 2);
//    REQUIRE(gcd(9, 6) == 3);
//    REQUIRE(gcd(3, 7) == 1);
//}
//
//TEST_CASE("describe_checksum", "[ckecksum]") {
//    REQUIRE(checksum(15) == 6);
//    REQUIRE(checksum(27) == 9);
//    REQUIRE(checksum(1425) == 12);
//}

//TEST_CASE("describe_sum_multipleszusatz", "[sum_multipleszusatz]") {
//    REQUIRE(sum_multipleszusatz(3) == 3);
//    REQUIRE(sum_multipleszusatz(10) == 33);
//    REQUIRE(sum_multipleszusatz(17) == 75);
//    REQUIRE(sum_multipleszusatz(155) == 6458);


//}

int main(int argc, char* argv[])
{
  sum_multiples();
  //sum_multipleszusatz(365);
  //std::cout << " Der groeste gemeinsame Teiler ist: ";
  //gcd(7,0);
  //std::cout << " Die Quersumme ist ";
  //checksum(37);

  /*return Catch::Session().run(argc, argv);*/
  
}

