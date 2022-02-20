
#include <math.h>
#include <iostream>
#include <locale>
#include <fstream>
#include <Windows.h>
using namespace std;
class Square {
protected: double storona;
double S=0, P=0, diag=0,vRad=0,oRad=0;
public:
	Square(double storona) {
		this->storona = (storona >= 0) ? storona : 0;
	}
	Square() {
		cout << "Введите сторону квадрата:";
		int storona;
		cin >> storona;
		this->storona = (storona >= 0) ? storona : 0;
	}
	~Square() {
		cout << "Обьект уничтожен!" << endl;
	}
	void printStorona();
	void square();
	void perimeter();
	void diagonal();
	void vRadius();
	void oRadius();
	void wfile();
};
void Square::printStorona() {
	cout << "Сторона равна: "<< storona << endl;
}
void Square::square() {
	S = storona * storona;
	cout << "Площадь равна: " << S << endl;
}
void Square::perimeter() {
	P = 4 * storona;
	cout << "Периметр равен: " << P << endl;
}
void Square::diagonal() {
	diag = storona * sqrt(2);
	cout << "Диагональ равна: " << diag << endl;
}
void Square::vRadius(){
	vRad = storona / 2;
	cout << "Радиус круга вписанного в квадрат равен : " << vRad << endl;
}
void Square::oRadius() {
	oRad = diag / 2;
	cout << "Радиус круга описаного около квадрата равен: " << oRad << endl;
}
void Square::wfile() {
	ofstream write;
	write.open("Square.txt", ios_base::binary);
	if (!write.is_open()) {
		cout << "Файл не может быть открыт или создан\n";
	}
	else {
		write << "------------------------------------------" << endl;
		write<< "|Сторона равна: " << storona<< endl;
		write<< "|Площадь равна: " << S << endl;
		write<< "|Периметр равен: " << P << endl;
	    write<< "|Диагональ равна: " << diag << endl;
		write<< "|Радиус круга вписанного в квадрат равен: " << vRad << endl;
		write<< "|Радиус круга описаного около квадрата равен : " << oRad << endl;
		write<< "--------------------------------------------"<<endl;
		cout << "Данные успешно записаны!";
		write.close();
	}
}
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(0, "rus");
	Square *a=new Square();
	a->printStorona();
	a->square();
	a->perimeter();
	a->diagonal();
	a->vRadius();
	a->oRadius();
	a->wfile();
	a->~Square();
	
	

}
