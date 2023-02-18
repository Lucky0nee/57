#include <iostream>
#include <vector>
using namespace std;

class Stos {
public:
    Stos() { }

    void push(int Symbol) {
        Symbols.push_back(Symbol);
    }

    void pop() {
        Symbols.pop_back();
    }

    void ShowStos() {
        cout << top(0) << "\n";
    }

    int top(int something = 0) {
        return Symbols[getSize() - something];
    }

    int getSize() {
        return Symbols.size() - 1;
    }

private:
    vector<int> Symbols;
};


int main() {
    Stos stos;
    int i_temp;
    int in_size, out_size;
    int counter = 0;
    cout << "How many values should be recorded: "; cin >> in_size;
    cout << "How many elements to output: "; cin >> out_size;

    for (int i = 0; i < in_size; ++i) {
        cout << "Write number: "; cin >> i_temp; stos.push(i_temp);
    }

    for (int i = 0; i < out_size; ++i) {
        if (in_size == 0) {
            cout << "\nStos - empty";
            break;
        }

        cout << "\nNumber: " << stos.top(counter); counter++; in_size--;
    }

    return 0;
}

/*
Напишіть простий клас, який містить якісь елементи. Стос — це проста структура даних з
двома операціями: push, яка додає елемент до колекції, і pop, яка вилучає останній
доданий елемент.

Ці два методи (push і pop) змінюють вміст стоса.

Окрім цих методів, додайте метод, щоб отримати доступ до верху без модифікації стека
(назвіть його top).

Якщо стос порожній, додайте якийсь виняток. Вашим основним

завданням є написання функцій оператора отримання значення зі стоса без його
вилучення. До основного коду додайте свій код, щоб обробляти ці конкретні
винятки. Крім того, в основному коді, додати трохи коду для введення даних.

Запитайте користувача, скільки значень треба записати, скільки елементів ваша
програма має вивести. Потім роздрукуйте стос — якщо виникне виняток,
надрукуйте адекватне повідомлення. Використовуйте оператори, визначені у вашій
програмі.

Приклад введення
1
2
3
4
5
6

Приклад виводу
6
5
4
3
2
1

Виняток: стос порожній.
*/
