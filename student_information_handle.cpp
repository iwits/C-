#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;

class student_information{
private:
    char name[200];
    int age;
    char num[200];
    int first_avg;
    int second_avg;
    int thrid_avg;
    int fourth_avg;
    int avg_score;
public:
    void setStudent();
    void getAvg();
    void getStudent();
};

void student_information::setStudent(){
    char c;
    cin.getline(name,200,',');
    cin>>age>>c;
    cin.getline(num,200,',');
    cin>>first_avg>>c>>second_avg>>c>>thrid_avg>>c>>fourth_avg;
}

void student_information::getAvg(){
    avg_score = (first_avg+second_avg+thrid_avg+fourth_avg)/4;
}
void student_information::getStudent(){
    cout<<name<<","<<age<<","<<num<<","<<avg_score<<endl;
}

int main(){
    student_information Student;
    Student.setStudent();
    Student.getAvg();
    Student.getStudent();
    return 0;
}

