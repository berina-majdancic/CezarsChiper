#include <iostream>#include <string>
#include <iomanip>
using namespace std;
void en(string a,int key)
{
	unsigned char e;
	for (int i = 0; a[i] != '\0'; ++i)
	{
		if ((a[i] >= 'a') && (a[i] <= 'z'))
		{
			e = a[i];
			e += key;
			if (e > 'z')
				e = e - 'z' + 'a' - 1;
			a[i] = e;
		}
		if ((a[i] >= 'A') && (a[i] <= 'Z'))
		{
			e = a[i];
			e += key;
			if (e > 'Z')
				e = e - 'Z' + 'A' - 1;
			a[i] = e;
		}
	}
	cout << a << endl;
}
void de(string a,int key)
{
	for (int i = 0; a[i] != '\0'; ++i)
	{
		if ((a[i] >= 'a') && (a[i] <= 'z'))
		{
			a[i] -= key;
			if (a[i] < 'a')
				a[i] = a[i] + 'z' - 'a' + 1;
		}
		if ((a[i] >= 'A') && (a[i] <= 'Z'))
		{
			a[i] -= key;
			if (a[i] < 'A')
				a[i] = a[i] + 'Z' - 'a' + 1;
		}
	}
	cout <<a<< endl;
}
int main()
{
	start:cout << right<<setw(200)<<"Caesar Chiper decryptor and encryptor" <<endl;
	int num,key;
	string a;
	do
	{
		cout << "1 - Encrypting" << endl;
		cout<< "2 - Decrypting" << endl<<endl;
		cin >> num;
	} while (num < 1 || num>2);
	cout <<endl<< "Input message: ";
	cin >> a;
	cout << endl << "Input key: ";
	cin >> key;
	if (num == 1)
	{
		cout << endl << "Your encrypded message: ";
		en(a, key);
	}
	else
	{
		cout << endl << "Your decrypded message: ";
		de(a, key);
	}
	char again;
	do
	{
		cout << "Again? (Y,N) ";
		cin >> again;
	} while (again != 'y' && again != 'n' && again != 'Y' && again != 'N');
	if (again == 'y' || again == 'Y')
		goto start;
}
