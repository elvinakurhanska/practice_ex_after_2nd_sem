#include <iostream>		//	cin/cout
using namespace std;

#define tab "\t"
//Директива #define создает макроопределение (макрос)
//#define ЧТО_ЗАМЕНИТЬ ЧЕМ_ЗАМЕНИТЬ
//#define STRING_BASICS
#define ARRAYS_BASICS
#define EXERCISE_1

void ASCII();
int StrLen(char str[]);
void reverse(char* str);

void main()
{
	
	#if defined STRING_BASICS
		//cout << "Hello World";
	//char str[] = { 'H', 'e', 'l', 'l', 'o', 0 };
	/*char str[] = "Hello";
	cout << str << endl;
	cout << sizeof(str) << endl;
	cout << typeid(str).name() << endl;*/;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
	/*2 + 3;
	5;
	int a = 2;
	a;
	;*/	//empty expression
	//ASCII();
	cout << (bool).0000001 << endl;
	cout << "Hello" << endl;
	const int n = 20;
	char str[n]{};	//20 bytes string 
	cout << "Type somethi: ";
	//cin >> str;
	cin.getline(str, n);
	cout << str << endl;
	cout << "String length: " << StrLen(str) << endl;
	/*char last_name[n]{};
	char first_name[n]{};
	cout << "Input your name: "; cin >> last_name >> first_name;
	cout << last_name << " " <<first_name<< endl;*/
	#endif // STRING_BASICS

#if defined EXERCISE_1

#endif

#ifdef ARRAYS_BASICS
	const int n = 5;
	int arr[n] = { 3, 5, 8, 13, 21 };
	cout << arr << endl;
	//Printing source array:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

	/*for (int i = n - 1; i >= 0; i--)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

	cout << arr[n - 1 - 0] << endl;

	for (int i = 0; i < n; i++)
	{
		cout << arr[n - 1 - i] << tab; //[n - 1 - i]  - отражение точки i 
	}
	cout << endl;*/

	int a = 2;
	int b = 3;
	cout << a << tab << b << endl;
	int c = b;
	b = a;
	a = c;
	cout << a << tab << b << endl;

	//Reversing array:

	for (int i = 0; i < n / 2; i++)
	{
		//TODO: поменять местами нулевой элемент с последним, первый с предпоследним и т.д.
		int buffer = arr[i];
		arr[i] = arr[n - 1 - i];
		arr[n - 1 - i] = buffer;
	}
	cout << endl;

	//Printing reverse array:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

#endif // ARRAYS_BASICS



}

void ASCII()
{
	for (int i = 0; i < 256; i++)
		cout << i << tab << (char)i << endl;
}

int StrLen(char str[])
{
	int i = 0;
	//for(Start; Stop; Step)
	for (; str[i]; i++);
	return i;
}

void reverse(char* str)
{

}