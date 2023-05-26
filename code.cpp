#include <iostream>
#include <string>
using namespace std;

struct Info {
    string name;
    int pass;
};

int main() {
    int escolha;
    bool logged = false;
    string n;
    int p;
    Info info;

    while (!logged) {
        cout << "Choose an option:\n[1] - Login\n[2] - Register\n";
        cin >> escolha;

        switch (escolha) {
            case 1:
                if (info.name.empty()) {
                    cout << "No registered user found. Please register first.\n";
                } else {
                    cout << "You are logged in.\n";
                    logged = true;
                }
                break;
            case 2:
                if (!info.name.empty()) {
                    cout << "A user is already registered.\n";
                } else {
                    cout << "Enter your name: ";
                    cin >> info.name;
                    cout << "Enter your password: ";
                    cin >> info.pass;
                    cout << "Registration successful.\n";
                }
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
                break;
        }
    }
    return 0;
}
