#include <iostream>
using namespace std;

int main() {
    int option, doctorChoice, age;
    string name, doctorName, date, time;
    double fee = 0.0;

    cout << "=== Ahmad Khan Hospital Appointment System ===\n";
    cout << "1. Book Appointment\n";
    cout << "2. Exit\n";
    cout << "Enter your choice: ";
    cin >> option;
    cin.ignore(); // Clear newline after cin

    if (option == 1) {
        cout << "\nEnter Patient Name: ";
        getline(cin, name);

        cout << "Enter Age: ";
        cin >> age;
        cin.ignore();

        cout << "\nAvailable Doctors:\n";
        cout << "1. Dr. Ali Khan (Cardiologist) - Rs. 1500\n";
        cout << "2. Dr. Awais Khan (Dermatologist) - Rs. 1200\n";
        cout << "3. Dr. Hameed Khan (Neurologist) - Rs. 1800\n";
        cout << "4. Dr. Asad Khan (Radiologist) - Rs. 1300\n";
        cout << "5. Dr. Shahid Khan (Surgeon) - Rs. 2000\n";

        cout << "Choose a doctor (1-5): ";
        cin >> doctorChoice;
        cin.ignore();

        switch (doctorChoice) {
            case 1:
                doctorName = "Dr. Ali Khan (Cardiologist)";
                fee = 1500;
                break;
            case 2:
                doctorName = "Dr. Awais Khan (Dermatologist)";
                fee = 1200;
                break;
            case 3:
                doctorName = "Dr. Hameed Khan (Neurologist)";
                fee = 1800;
                break;
            case 4:
                doctorName = "Dr. Asad Khan (Radiologist)";
                fee = 1300;
                break;
            case 5:
                doctorName = "Dr. Shahid Khan (Surgeon)";
                fee = 2000;
                break;
            default:
                cout << "Invalid doctor choice.\n";
                return 0;
        }

        cout << "Enter Appointment Date (YYYY-MM-DD): ";
        getline(cin, date);

        cout << "Enter Appointment Time (e.g. 10:00 AM): ";
        getline(cin, time);

        cout << "\n--- Appointment Booked Successfully! ---\n";
        cout << "Patient Name      : " << name << endl;
        cout << "Age               : " << age << endl;
        cout << "Doctor            : " << doctorName << endl;
        cout << "Date              : " << date << endl;
        cout << "Time              : " << time << endl;
        cout << "Consultation Fee  : Rs. " << fee << endl;
    }
    else if (option == 2) {
        cout << "Thank you. Exiting the system.\n";
    }
    else {
        cout << "Invalid option. Please restart the program.\n";
    }

    return 0;
}
