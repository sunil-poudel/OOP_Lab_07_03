//wap to implement the given form of inheritance
#include <iostream>
using namespace std;
class student{
private:
    int roll;
public:
    void sget(){
        cout<<"Enter your roll number: ";
        cin>>roll;
    }
    void sdisplay(){
        cout<<"Roll number of student: "<<roll<<endl;
    }
};
class test:public student{
private:
    string name;
    int sum=0;
    int marks[5];
public:
    void tget(){
        cout<<"Enter your marks in 5 subjects(full marks 100): "<<endl;
        for(int i=0; i<=4; i++) {
            cin >> marks[i];
            sum+=marks[i];
        }
    }
    void tdisplay(){
        cout<<"Your marks were: ";
        for(int i=0; i<=4; i++) {
            cout << marks[i]<<endl;
        }
        float percentage = (sum/500)*100;
        cout<<"You secured "<<percentage<<"% !"<<endl;
    }
};
class sports:public student{
private:
    float price;
public:
    void sget(){
        cout<<price<<endl;
    }
    void sdisplay(){
        cout<<"The price is: "<<price<<endl;
    }
};
class result:public test, public sports{
private:
    float fee;
public:
    void rget(){
        student::sget();
        test::tget();
        sports::sget();
        cout<<"Enter the fee: "<<endl;
        cin>>fee;
    }
    void rdisplay(){
        test::tdisplay();
        sports::sdisplay();
        cout<<"The fee is: "<<fee<<endl;

    }
};
int main(){
    result r;
    r.rget();
    r.rdisplay();
}