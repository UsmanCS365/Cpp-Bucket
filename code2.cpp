#include<iostream>
using namespace std;
int power(int, int);
int power(int x, int y){
    int result =1;
    for (int  i = 0; i < y; i++)
    {
        result *=x;

    }
    return result;
    
}
int main(){
    int x, y;
    cout<<"Power Calculator"<<endl;
    cout<<"Enter the number\t"<<endl;
    cin>>x;
    cout<<"Enter the power of"<<x<<"  to raise it"<<endl;
    cin>>y;
    int result =power(x, y);
    cout<<x<<" to the power of"<<y<<" is:\t"<<result<<endl; 


    return 0;

}