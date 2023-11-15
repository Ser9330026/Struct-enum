#include <iostream>
#include <string>

//Задание 1
enum class Month {
    Январь = 1, Февраль, Март, Апрель, Май, Июнь,
    Июль, Август, Сентябрь, Октябрь, Ноябрь, Декабрь
};

//Задание №2
struct BankAccount {
    int account;
    std::string name;
    double balance;
};

void newBalance(BankAccount& count, double newBal) {
    count.balance = newBal;

}

//Задание №3
struct Adress {
    std::string city;
    std::string street;
    int numberHouse;
    int numberFlat;
    int ID;
};

void printFunc(Adress& adr) {
    std::cout << "Введите название города: "; std::cin >> adr.city;
    std::cout << "Введите название улицы: "; std::cin >> adr.street;
    std::cout << "Введите номер дома: "; std::cin >> adr.numberHouse;
    std::cout << "Введите номер квартиры: "; std::cin >> adr.numberFlat;
    std::cout << "Введите индекс: "; std::cin >> adr.ID;
}

void showFunc(Adress& adr) {
    std::cout << "Город: " << adr.city <<
        "\nУлица: " << adr.city <<
        "\nНомер дома: " << adr.numberHouse <<
        "\nНомер квартиры: " << adr.numberFlat <<
        "\nИндекс: " << adr.ID << std::endl;
}


int main() {
    setlocale(LC_ALL, "rus");
    std::cout << "Задание №1" << std::endl;
    int номерМесяца;
    do {
        std::cout << "Введите номер месяца (или 0 для выхода): ";
        std::cin >> номерМесяца;

        if (номерМесяца == 0) {
            std::cout << "До свидания C++" << std::endl;
            break;
        }
        if (номерМесяца >= static_cast<int>(Month::Январь) && номерМесяца <= static_cast<int>(Month::Декабрь)) {
            Month месяц = static_cast<Month>(номерМесяца);
            switch (месяц) {
            case Month::Январь:
                std::cout << "Январь" << std::endl;
                break;
            case Month::Февраль:
                std::cout << "Февраль" << std::endl;
                break;
            case Month::Март:
                std::cout << "Март" << std::endl;
                break;
            case Month::Апрель:
                std::cout << "Апрель" << std::endl;
                break;
            case Month::Май:
                std::cout << "Май" << std::endl;
                break;
            case Month::Июнь:
                std::cout << "Июнь" << std::endl;
                break;
            case Month::Июль:
                std::cout << "Июль" << std::endl;
                break;
            case Month::Август:
                std::cout << "Август" << std::endl;
                break;
            case Month::Сентябрь:
                std::cout << "Сентябрь" << std::endl;
                break;
            case Month::Октябрь:
                std::cout << "Октябрь" << std::endl;
                break;
            case Month::Ноябрь:
                std::cout << "Ноябрь" << std::endl;
                break;
            case Month::Декабрь:
                std::cout << "Декабрь" << std::endl;
                break;
            }
        }
        else {
            std::cout << "Неправильный номер!" << std::endl;
        }

    } while (true);

    std::cout << "\n\nЗадание №2" << std::endl;
    BankAccount bank1;
    std::cout << "Введите номер счета: "; std::cin >> bank1.account;
    std::cout << "Введите имя владельца: "; std::cin >> bank1.name;
    std::cout << "Введите баланс: "; std::cin >> bank1.balance;
    double newBal;
    std::cout << "Введите новый баданс: "; std::cin >> newBal;
    newBalance(bank1, newBal);
    std::cout << "Ваш счет: " << bank1.account << ' '
        << bank1.name << ' ' << bank1.balance << std::endl;

    std::cout << "\n\nЗадание №3" << std::endl;
    Adress adr1, adr2;
    printFunc(adr1);
    std::cout << std::endl;
    printFunc(adr2);
    std::cout << std::endl;

    showFunc(adr1);
    std::cout << std::endl;
    showFunc(adr2);


    return 0;
}

