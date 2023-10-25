#include <iostream> 
using namespace std;
int main()
{
    setlocale(0, "");

    int size,menu,height;
    char input_char;
    int p = 0;
    cout << "[1]Равнобедренная трапеция: \n[2]равнобедренный треугольник: \nВвод: ";
    cin >> menu;
    switch (menu) {
    
    case 1:
        cout << "Введите высоту: ";
cin >> size;
cout << "Введите символ: "<<endl;
    cin >> input_char;
    for (int i = size - 1; i >= 0; i--) {
        for (int spc = 0; spc < i; spc++) {
            cout << "  ";
        }
        for (int x = 0; x < size + p; x++) {
            cout << input_char << " ";
        }
        p += 2;
        cout << endl;

    }
    
    case 2:
        cout << "Введите высоту  равнобедренного треугольника: ";
        cin >> height;

        for (int i = 0; i < height; i++)
        {
            for (int j = 1; j < height - i; j++)
            {
                cout << ' ';
            }

            for (int j = height - 2 * i; j <= height; j++)
            {
                cout << '*';
            }
            cout << endl;
        }
    }
    
    return 0;
}