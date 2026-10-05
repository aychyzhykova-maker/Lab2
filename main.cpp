#include <iostream>
using namespace std;

int main()
{
    // Integer12. 
    // Вивести число, отримане при прочитанні вихідного числа справа наліво.
    cout << "Integer12." << endl;
    int N, a, b, c, res;
    cout << "N = ";
    cin >> N;

    a = N / 100;
    b = (N / 10) % 10;
    c = N % 10;

    res = c * 100 + b * 10 + a;
    cout << "Result = " << res << endl;

    // Integer37.
    // Знайти, скільки квадратних плиток зі стороною C
    // можна вмістити та яка частина прямокутника залишиться незаповненою.
    cout << "\nInteger37." << endl;
    int A, B, C, tiles, area, tileArea, remaining;
    cout << "A = ";
    cin >> A;
    cout << "B = ";
    cin >> B;
    cout << "C = ";
    cin >> C;

    tiles = (A / C) * (B / C);

    area = A * B;
    tileArea = tiles * C * C;
    remaining = area - tileArea;

    cout << "Number of tiles = " << tiles << endl;
    cout << "Remaining area = " << remaining << endl;


    // Integer22.
    // Знайти кількість секунд, що пройшли з початку останньої години.
    cout << "\nInteger22." << endl;

    int seconds, result;
    cout << "N = ";
    cin >> seconds;

    result = seconds % 3600;

    cout << "Seconds from the beginning of the last hour = "
         << result << endl;

    return 0;
}
