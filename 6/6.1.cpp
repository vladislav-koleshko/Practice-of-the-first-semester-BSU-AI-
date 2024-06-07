#include <iostream>
#include <string>

struct Student {
    std::string name;
    int age;
    int course;
    char gender;
    float performance;
};

void fillArray(Student* array, int size) {
    for (int i = 0; i < size; i++) {
        std::cout << "Enter name: ";
        std::cin >> array[i].name;
        std::cout << "Enter age: ";
        std::cin >> array[i].age;
        std::cout << "Enter course: ";
        std::cin >> array[i].course;
        std::cout << "Enter gender (M/F): ";
        std::cin >> array[i].gender;
        std::cout << "Enter performance: ";
        std::cin >> array[i].performance;
    }
}

void printArray(Student* array, int size) {
    for (int i = 0; i < size; i++) {
        std::cout << "Name: " << array[i].name << ", Age: " << array[i].age <<
            ", Course: " << array[i].course << ", Gender: " << array[i].gender <<
            ", Performance: " << array[i].performance << std::endl;
    }
}

float averagePerformance(Student* array, int size, int course) {
    float totalPerformance = 0.0;
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (array[i].course == course) {
            totalPerformance += array[i].performance;
            count++;
        }
    }
    if (count != 0) {
        return totalPerformance / count;
    }
    else {
        return 0;
    }
}

int main() {
    const int size = 3;
    Student students[size];

    fillArray(students, size);
    std::cout << "---------Student Information---------" << std::endl;
    printArray(students, size);

    int course;
    std::cout << "Enter course number to calculate average performance: ";
    std::cin >> course;
    float avgPerf = averagePerformance(students, size, course);
    if (avgPerf != 0) {
        std::cout << "Average Performance for course " << course << ": " << avgPerf << std::endl;
    }
    else {
        std::cout << "No students found for course " << course << std::endl;
    }
    return 0;
}