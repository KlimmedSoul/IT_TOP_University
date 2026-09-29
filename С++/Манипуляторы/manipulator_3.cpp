/*
  Симдяшкин Александр Денисович
  Нужно сделать программу, которая будет выдавать человеку счет за электричество на основе введенных данных.
  Пользователь вводит потребление электричества, цена за 1 кВт*ч и количество дней
  Программа должна посчитать итоговую стоимость и среднее потребление за день.
*/

#include <iostream>
#include <iomanip>

int main()
{
  float consumption{};
  float price{};
  int days{};

  std::cout << "Получите ваш счет за электричество!" << std::endl;

  std::cout << "Введите потребление электричества (кВт*ч): ";
  std::cin >> consumption;

  std::cout << "Введите цену за 1 кВт*ч: ";
  std::cin >> price;

  std::cout << "Введите количество дней: ";
  std::cin >> days;

  float cost = consumption * price;
  float daily_consumption = consumption / days;

  std::cout << std::fixed << std::setprecision(2);

  std::cout << std::setfill('-') << std::setw(35) << "" << '\n';
  std::cout << std::setfill(' ') << std::setw(25) << "Счет за электричество" << '\n';
  std::cout << std::setfill('-') << std::setw(35) << "" << '\n';

  std::cout << std::setfill(' ');
  std::cout << "Потребление: " << consumption << " кВт*ч\n";
  std::cout << "Цена: " << price << " руб.\n";
  std::cout << "Итого: " << cost << " руб.\n";
  std::cout << "Среднее за день: " << daily_consumption << " кВт*ч\n";

  std::cout << std::setfill('-') << std::setw(35) << "" << '\n';

  return 0;
}