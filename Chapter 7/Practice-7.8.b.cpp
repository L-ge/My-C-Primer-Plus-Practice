#include <iostream>
const int Seasons = 4;
const char * Snames[] = {"Spring", "Summer", "Fall", "Winter"};
struct spend
{
    double expenses[Seasons];
};

void fill(double pa[]);
void show(const double da[]);

int main()
{
    spend s;
    fill(s.expenses);
    show(s.expenses);
	return 0;
}

void fill(double pa[])
{
    using namespace std;
    for (int i = 0; i < Seasons; i++)
    {
        cout << "Enter " << Snames[i] << " expenses: ";
        cin >> pa[i];
    }
}

void show(const double da[])
{
    using namespace std;
    double total = 0.0;
    cout << "\nEXPENSES\n";
    for (int i = 0; i < Seasons; i++)
    {
        cout << Snames[i] << ": $" << da[i] << endl;
        total += da[i];
    }
    cout << "Total Expenses: $" << total << endl;
}