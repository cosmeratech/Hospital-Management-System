#include <iostream>
using namespace std;\

class Patient {
    public:
    int id;
    string name;
    int age;
    string disease;

     void input(){
        cout<<"Enter Patient ID: ";
        cin>>id;
        cin.ignore(); // clear leftover newline
        cout<<"Enter Patient Name: ";
        getline(cin, name); // allows spaces
        cout<<"Enter Patient Age: ";
        cin>>age;
        cin.ignore(); // clear leftover newline
        cout<<"Enter Disease: ";
        getline(cin, disease); // allows spaces too
    }

    void display(){
        cout<<"Patient ID: "<<id<<endl;
        cout<<"Patient Name: "<<name<<endl;
        cout<<"Patient Age: "<<age<<endl;
        cout<<"Disease: "<<disease<<endl;
        cout<<"--------------------------"<<endl;
    }
};

int main(){
    Patient p[10]; // Array to hold up to 10 patients
    int count = 0; // Current number of patients
    int choice; // User menu choice

    do{
        cout<<"=== Hospital Management System === :"<<endl;
        cout<<"1. Add new Patient"<<endl;
        cout<<"2. Display all Patients"<<endl;
        cout<<"3. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice){
            case 1:
                if(count<10){
                    p[count].input();
                    count++;
                    cout<<"Patient added successfully!"<<endl;
                } 
                else {
                    cout<<"No more space for new patients !"<<endl;
                }
                break;
            case 2:
                cout<<"=== List of Patients ==="<<endl;
                for(int i=0; i<count; i++) {
                p[i].display();
                }
                break;
            case 3:
            cout<<"Exiting the system... Thankyou!" <<endl;
                break;
            default:
            cout<<"Invalid choice. Please try again!"<<endl;
        }
    }
    while(choice!=3);
    return 0;
}
