#include<iostream>
using namespace std;
class Vehicle{
    private:
    string make, model;
    int year;
    public:
    
    void input_data(){
        cout<<"\n\n\t\tEnter company's name"<<endl;
        cin>>make;

        cout<<"\t\tEnter model"<<endl;
        cin>>model;
        cout<<"\t\tEnter year"<<endl;
        cin>>year;

    }
    
    void show_data(){
        cout<<"Make: "<<make<<endl;
        cout<<"Model: "<<model<<endl;
        cout<<"Year: "<<year<<endl;

    }   
};
class Car : public Vehicle{
    private:
    int num_of_doors;
    public:
    
    void input_data(){
        Vehicle :: input_data();
        cout<<"\n\n\t\tEnter the number of doors"<<endl;
        cin>>num_of_doors;

    }
    
    void show_data(){
        Vehicle :: show_data();
        cout<<"\t\tDoors: "<<num_of_doors<<endl;

    }
};
class ToyotaCar : public Car{
    private:
    string trim_level;
    public:
    
    void input_data(){
        Car :: input_data();
        cout<<"\n\n\t\tEnter the trim level"<<endl;
        cin>>trim_level;
        
    }


};
int main(){
    ToyotaCar mycar;
    cout<<"----------Enter car info----------";
    mycar.input_data();
    cout<<"\t\t----------Your Car Info----------";
    mycar.show_data();



    
    return 0;

}