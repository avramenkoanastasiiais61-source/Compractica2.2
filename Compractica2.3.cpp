#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int studentnum;

    cout << "Введіть номер студента: ";
    cin >> studentnum;

    switch (studentnum)
    {
    case 1: cout << "Авраменко А. О.";
        break;
    case 2: cout << "Бігун Н. Є.";
        break;
    case 3: cout << "Бовкун Я. Ю.";
        break;
    case 4: cout << "Бут І. Д.";
        break;
    case 5: cout << "Волковський І. С.";
        break;
    case 6: cout << "Волох Д. В.";
        break;
    case 7: cout << "Гасюк В.";
        break;
    case 8: cout << "Глушков О. М.";
        break;
    case 9: cout << "Голубенко Д. В.";
        break;
    case 10: cout << "Дюдя І. І.";
        break;
    case 11: cout << "Камнєв А. О.";
        break;
    case 12: cout << "Карпов М. К.";
        break;
    case 13: cout << "Коваленко Г. Є.";
        break;
    case 14: cout << "Кокошко М. О.";
        break;
    case 15: cout << "Кутовий Д. О.";
        break;
    case 16: cout << "Ларченкова І. О.";
        break;
    case 17: cout << "Левко Я. І.";
        break;
    case 18: cout << "Левченко О. І.";
        break;
    case 19: cout << "Мажуга К. М.";
        break;
    case 20: cout << "Пивоварова К. Д.";
        break;
    case 21: cout << "Постой А. А.";
        break;
    case 22: cout << "Романенко А. Є.";
        break;
    case 23: cout << "Свіцельська М. Ю.";
        break;
    case 24: cout << "Страфун К. І.";
        break;
    case 25: cout << "Телефус А. А.";
        break;
    case 26: cout << "Ткаченко П. А.";
        break;
    case 27: cout << "Федорович М. А.";
        break;
    case 28: cout << "Федорчук М. В.";
        break;
    case 29: cout << "Форостяна А. М.";
        break;
    case 30: cout << "Чершнев І. Ю.";
        break;
    default: cout << "Номер не знайдено";
        break;
    }
    return 0;
}
