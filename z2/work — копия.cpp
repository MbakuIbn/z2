#include <iostream>

using namespace std;

void poisk(float* massive, int mas_lenght, int& max_index, int& min_index, float& max, float& min) {
	max_index = min_index = 0;
	max = min = massive[0];
	for (int i = 0; i < mas_lenght; i++) {
		if (massive[i] > max) {
			max = massive[i];
			max_index = i;
		}
		if (massive[i] < min) {
			min = massive[i];
			min_index = i;
		}
	}
}

int main()
{
	setlocale(LC_ALL, "");
	float mas[] = { 12.45,234,7,-88.8,0,22.3 };
	int min_index, max_index;
	float max, min;
	poisk(mas, sizeof(mas) / sizeof(mas[0]), max_index, min_index, max, min);
	cout << "Массив: \n";
	for (int i = 0; i < 5; i++) {
		cout << mas[i] << ", ";
	}
	cout << "\nНомер максимума:" << max_index + 1 << endl;
	cout << "Максимум:" << max << endl;
	cout << "Номер минимума:" << min_index + 1 << endl;
	cout << "Минимум:" << min << endl;
	return 0;

}







































//#include <iostream>
//#include <ctime>
//using namespace std;
//const int SIZE = 10;
//
//void Set(int array[]) {
//
//    for (int i = 0; i < SIZE; i++)
//        array[i] = rand() % 20 - 10;
//}
//
//void Print(int array[]) {
//
//    setlocale(LC_ALL, "RUS");
//    cout << " Массив: " << endl;
//    for (int i = 0; i < SIZE; i++)
//    {
//        cout << array[i] << ' ';
//    }
//    cout << endl;
//}
//void Sort(int arr[], int size) {
//
//    for (int i = 0; i < size / 2 - 1; i++)
//        for (int j = 0; j < size / 2 - 1; j++)
//            if (arr[j] < arr[j + 1]) swap(arr[j], arr[j + 1]);
//
//    for (int i = size / 2; i < size - 1; i++)
//        for (int j = size / 2; j < size - 1; j++)
//            if (arr[j] > arr[j + 1]) swap(arr[j], arr[j + 1]);
//}
//void main() {
//
//    setlocale(LC_ALL, "RUS");
//    srand((int)time(0));
//    int a[SIZE];
//    Set(a);
//    Print(a);
//    cout << "Результат: " << endl;
//    Sort(a, 10);
//    Print(a);
//    cout << endl;
// 
//}

