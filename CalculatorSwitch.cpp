
#include <iostream>
using namespace std;

int main()
{
    int a = 0, b = 0, result = 0;
    char sign = 0;

    while (true)
    {
        result = 0;
        cout << "Enter action sign( +, -, *, /) or x for exit: ";
        cin >> sign;

        if (sign == 'X' || sign == 'x') break;

        cout << "Enter a and b: ";
        cin >> a >> b;

        switch (sign)
        {
            case '+': result = a + b; break;
            case '-': result = a - b; break;
            case '*': result = a * b; break;
            case '/': 
                if (b != 0) result = a / b; 
                else cout << "You can't divide by zero!";  
                break;
            default: cout << "error";
        }
        cout << result << endl;
    }
}
