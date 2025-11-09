# Hospital-Management-System
A C++ console-based hospital management application for managing patient records with an interactive menu system.

## Features

- **Add Patient**: Register new patients with ID, name, age, and disease information
- **Display Patients**: View all registered patient records
- **Patient Management**: Store up to 10 patients in memory
- **Interactive Menu**: Simple menu-driven interface

## Usage

### Compilation

```bash
g++ HospitalManagementSystem.cpp -o HospitalManagementSystem
```

### Running

```bash
./HospitalManagementSystem
```

### Menu Options

1. **Add new Patient**: Enter patient details (ID, name, age, disease)
2. **Display all Patients**: View complete list of registered patients
3. **Exit**: Close the application

## Implementation Details

- Object-oriented design with `Patient` class
- Array-based storage (maximum 10 patients)
- Input validation for menu choices
- Patient information includes:
  - Patient ID
  - Patient Name
  - Patient Age
  - Disease

## Notes

- Maximum capacity: 10 patients
- Data is stored in memory (not persisted to disk)
