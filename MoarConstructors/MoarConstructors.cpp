#include <iostream>
#include <conio.h>
#include "CashRegister.h"
#include "DispenserType.h"

void showSelection();
void sellProduct(CashRegister* cashRegister, DispenserType* dispenser);

int main()
{
    setlocale(LC_ALL, "rus");

    CashRegister* cashRegister = new CashRegister();
    DispenserType* bubblegum = new DispenserType(1, 30);
    DispenserType* crisps = new DispenserType(75, 60);
    DispenserType* cookies = new DispenserType(80, 10);
    //и так далее

    int choice;
    showSelection();
    std::cin >> choice;
    while (choice != 0) {
        switch (choice) {
        case 1:
            sellProduct(cashRegister, bubblegum);
            break;
        case 2:
            sellProduct(cashRegister, crisps);
            break;
        case 3:
            sellProduct(cashRegister, cookies);
            break;
        default:
            printf("Неверный выбор.");
        }

        printf("Нажмите любую кнопку, чтобы продолжить.");
        _getch();
        system("cls");
        showSelection();
        std::cin >> choice;
    }


    system("pause");
    return 0;
}

void showSelection()
{
    printf("Автомат торговый. Собственность ООО \"ЖРАТ\"\n"
        "В наличии:\n"
        "1. Бубльгум - 30 рублей\n"
        "2. Чипсы - 60 рублей\n"
        "3. Печенье - 10 рублей\n"
        "Введите номер соответствующего товара или 0, чтобы выйти: ");
}

void sellProduct(CashRegister* cashRegister, DispenserType* dispenser)
{
    int deposit; //внесённая сумма

    if (dispenser->getNoOfItems() == 0) {
        printf("Этот товар закончился!\n");
        return;
    }
    
    printf("Стоимость товара: %i. Внесите оплату.\n"
        "Внесённая сумма: ", dispenser->getCost());
    std::cin >> deposit;
    if (deposit < dispenser->getCost()) {
        printf("Внесённая сумма недостаточна! Отмена операции.\n");
        return;
    }

    cashRegister->acceptAmount(deposit);
    dispenser->makeSale();
    printf("Заберите свой товар в окошке выдачи. Автомат сдачу не выдаёт :)\n");
}
