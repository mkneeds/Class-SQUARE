
#include <math.h>
#include <iostream>
#include <locale>
#include <fstream>
#include <Windows.h>
using namespace std;
class Bot {
private: string time, salary;
protected: string Name, version, sphera;
		 string sphera_obsh = "Работать";
		 string sphera_calc = "Спать";
public:
	Bot() {
		cout << "Эй, Создатель дай мне имя :" << endl;
		cin >> Name;
		cout << "А теперь, Создатель,какая я версия? :" << endl;
		cin >> version;
		cout << "Оу,а какая у меня сфера деятельности?:" << endl;
		cout << "Выбери пожалуйста из моего списка:" << endl;
		cout << "1.Отправить на плантацию" << endl;
		cout << "2.Отдых" << endl;
		int sphera;
		cin >> sphera;
		switch (sphera) {
		case 1: this->sphera = sphera_obsh; break;
		case 2: this->sphera = sphera_calc; break;
		default: cout << "Упсс...А у меня такого нет"; break;
		}
	}
	Bot(string Name, string version) {
		this->Name = Name;
		this->version = version;
		cout << "Оу,а какая у меня сфера деятельности?:" << endl;
		cout << "Выбери пожалуйста из моего списка:" << endl;
		cout << "1.Отправить на плантацию" << endl;
		cout << "2.Отдых" << endl;
		int sphera;
		cin >> sphera;
		switch (sphera) {
		case 1: this->sphera = sphera_obsh; break;
		case 2: this->sphera = sphera_calc; break;
		default: cout << "Упсс...А у меня такого нет"; break;
		}

	}
	~Bot() {
		cout << "Создатель....За что????...(Умер)" << endl;
	}
	void privetstvie();
	void work();
	void file();
	
};
void Bot::privetstvie() {
	cout << "Привет,меня зовут..." << Name << endl;
	cout << "Моя версия..." << version << endl;
	cout << "Я умею:" << sphera<<endl;
}
void Bot::work() {
	cout << "Желаете отправить меня на работу?" << endl;
}
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
	//Square *a=new Square();
	//a->printStorona();
	//a->square();
	//a->perimeter();
	//a->diagonal();
	//a->vRadius();
	//a->oRadius();
	//a->wfile();
	//a->~Square();
	Bot a;
	a.privetstvie();
	

}
