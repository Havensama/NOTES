//OOP class grade sheet

#include <iostream>
#include <string>
#include <vector>
#include <stack>
using namespace std;

class Grades{
    public:
        string name;
        long int id;
        double math;
        double science;
        double english;
        double filipino;
        double hekasi;
        double average;
        
        double averageScore() {
            double averageScore =( math + science + english + filipino + hekasi) / 5.0;
                return averageScore;
    }
        
    void setData(string n, long int i, double m, double s, double e, double f, double h){
            name = n;
            id = i;
            math = m;
            science = s;
            english = e;
            filipino = f;
            hekasi = h;
            average = averageScore();     
    }

    void displayInfo(){
        cout << "name: " << name << endl;
        cout << "id: " << id << endl;
        cout << "average: " << average << endl;
    }
};

void insertionSort(vector<Grades>& grades) {
    int n = grades.size();
    for (int i = 1; i < n; i++) { 
        Grades key = grades[i]; 
        int  j = i - 1;
        
        while (j >= 0 && grades[j].average > key.average) { 
            grades[j + 1] = grades[j]; 
            j--;
        }
        grades[j + 1] = key;
    }
}
int main(){
    vector<Grades> name(5);
   
    name[0].setData("Laraquel",20221130923,79,81,85,95,76);
    name[1].setData("Rance",20241113019,76,82,86,97,91);
    name[2].setData("Gaspi",20241120810,77,80,87,92,82);
    name[3].setData("Untalan",20241100947,78,89,89,81,75);
    name[4].setData("Aldeguer",20241100023475,79,84,90,88,80);
    
    insertionSort(name);
    
    cout << "Sorted" << endl;
    for (const auto& name : name) {
        cout << "ID: " << name.id << ", Average score: " << name.average << endl;
    }
    
    stack<long int> student;
    student.push(20221130923);
    student.push(20241113019);
    student.push(20241120810);
    student.push(20241100947);
    student.push(20241100023475);

    cout << "\nSTACK ID (REVERSE)" << endl;
    cout << "Contents of student: " << endl;
    while (!student.empty()) {
        cout << student.top() << endl;
        student.pop();
    }
    cout << endl;
    
 
    
    return 0;
}