#include <iostream>





double mile_to_kilometer(double a) {
	std::cout << "Bitte geben sie den Meilenwert ein ";
	double meilen;
	std::cin >> meilen;
	std::cout << meilen << "werden in Kilometer umgerechnet\n";
	double kilometer;
	kilometer = meilen * 1.6;
	std::cout << kilometer << "Kilometer sind " << meilen << "Meilen";
	return 0;


}


int main(int argc, char* argv[]) {
	mile_to_kilometer(17.5);

}