//Create a class cricketer with member variables to represent name, age and number of matches played.
//From this class derive two class bowler and batsman. Bowler class has number of wickets and member variable and
//batsman class has number of runs and centuries as member variables. Use appropriate member functions in all classes
//to read and display respected data.

#include <iostream>
using namespace std;
class Cricketer{
private:
    string name;
    int age;
    int numberOfMatches;
public:
    Cricketer(string name, int age, int numberOfMatches):name(name), age(age), numberOfMatches(numberOfMatches){}
    virtual void display(){
        cout<<"Personal Information:"<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Number of matches played: "<<numberOfMatches<<endl;
    }

};
class Bowler:public Cricketer {
private:
    int numberOfWickets;
public:
    Bowler(string name, int age, int numberOfMatches, int numberOfWickets): Cricketer(name, age, numberOfMatches), numberOfWickets(numberOfWickets){}
   void display()override{
        Cricketer::display();
        cout<<"Bowler Information:"<<endl;
        cout<<"number of wickets: "<<numberOfWickets<<endl;
    }
};
class Batsman:public Cricketer{
private:
    int numberOfRuns;
public:
    Batsman(string name, int age, int numberOfMatches, int numberOfRuns) : Cricketer(name, age, numberOfRuns), numberOfRuns(numberOfRuns){}
    void display()override{
        Cricketer::display();
        cout<<"Bowler Information:"<<endl;
        cout<<"number of runs: "<<numberOfRuns<<endl;
        cout<<"Number of centuries: "<<(numberOfRuns/100)<<endl;
    }
};
int main(){
    Bowler bowler("Sunil Poudel", 21, 12, 3);
    bowler.display();
    cout<<string(25, '-')<<endl;
    Batsman batman("Ram Pun", 25, 20, 250 );
    batman.display();
}