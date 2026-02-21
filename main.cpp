#include <iostream>
#include <vector>

using namespace std;

// Struct soll einen Namen und eine Note enthalten, wähle geeignete Datentypen
struct Studierende {
    string name;
    double note;
};

int main() {

    vector<Studierende> students;

    // Füge 4 Studierende in die Liste students ein
    students.push_back({"Max", 5.5});
    students.push_back({"Hans", 4.5});
    students.push_back({"Klaus", 3.5});
    students.push_back({"Franz", 4});

    cout << "Pruefungsergebnisse:" << endl;
    // Gib alle Studierenden und die jeweilige Note aus
    cout << "Anzahl Produkte: " << students.size() << "\n";
    cout << "Produkte:\n";
    for (size_t i = 0; i < students.size(); ++i)
    {
        cout << students[i].name << " Note: " << students[i].note << "\n";

    // Gib aus, ob die jeweilige Person bestanden hat oder nicht

    if ( students[i].note <4)
        {
        cout << "Pruefung nicht bestanden" <<endl;
        }
    else
    {
        cout << "Pruefung  bestanden" <<endl;
    }
    }
    return 0;
}