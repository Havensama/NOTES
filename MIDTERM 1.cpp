//OOP class grade sheet

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Grades{
    public:
        string name;
        string id;
        double math;
        double science;
        double english;
        double filipino;
        double hekasi;
        double average;
        
        double averageScore() {
            double averageScore = ( math + science + english + filipino + hekasi) / 5.0;
                return averageScore;
    }
        
    void setData(string n, string i, double m, double s, double e, double f, double h){
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
        cout << "Name: " << name << endl;
        cout << "Id: " << id << endl;
        cout << "Average: " << average<< endl;
    }

};

int main(){
    Grades name1, name2, name3, name4, name5;
    name1.setData("Laraquel","20221130923",79,81,85,95,76);
    name2.setData("Rance","20241113019",76,82,86,97,91);
    name3.setData("Gaspi","20241120810",77,80,87,92,82);
    name4.setData("Untalan","20241100947",78,89,89,81,75);
    name5.setData("Aldeguer","20241100023475",79,84,90,88,80);


    name4.displayInfo();

    
    return 0;
}