
//Write a program that requests the integers a, b and c from the user, calculates the roots
//and displays the result. The program must then ask the user if they wish to do another calculation
//and repeatedly calculate roots for different sets of constants until the user presses
//“q” to quit. You are required to determine the roots even if they happen to be imaginary.
//Hint: a good way of solving this problem is to leverage the functionality of the complex
//type by making extensive use of it, rather than reverting to using primitive types (float
//etc).
//You may assume that the user will not make any input errors such as supplying a character
//when a number is required. This is not really a reasonable assumption but we will only
//cover error checking later in the course.

#include <iostream> // contains the definition of cout, endl
#include <complex> // contains the complex class definition
#include <cmath>
using namespace std; // cout, endl, complex are all part of this namespace

typedef complex<float> fcomp; // initializing an alias for complex<float>

void quadratic( fcomp a, fcomp b, fcomp c);
int main(){
    
    char ans = ' ';
    fcomp a;
    fcomp b;
    fcomp c;
    
    while( ans != 'q'){
        
        
        
        
        cout<< "Enter integers a,b and c of the quadratic equation"<< endl;
        
        cout<< "Enter integer a: ";
        cin >> a ;
        cout<< "Enter integer b: ";
        cin >> b ;
        cout<< "Enter integer C: ";
        cin >> c ;
        
        cout<< "Integer a entered is:"<< a<< endl;
        cout<< "Integer b entered is:"<< b<< endl;
        cout<< "Integer c entered is:"<< c<< endl;
        quadratic(a, b, c);
        
        cout<< "If you want to quit the program, type 'q' to quit, if not type in any other character" <<  endl;
        cin>> ans;
        
    }
    return 0;
    
}


void quadratic( fcomp a, fcomp b, fcomp c){
    
    fcomp PositiveAnswer;
    fcomp root1 = (-b+sqrt(b*b-a*c-a*c-a*c-a*c))/(a+a);
    fcomp root2 = (-b-sqrt(b*b-a*c-a*c-a*c-a*c))/(a+a);
    
    cout<< "The positive answer is "<< root1<<endl;
    cout<< "The negative answer is "<< root2<<endl;
    
    if (root1.imag()==0)
        cout<<"In real-imaginary form, Root one is: "<< root1.real()<<endl;
    if (root1.imag()<0)
        cout<<"In real-imaginary form, Root one is: "<< root1.real() << root1.imag() << "j" << endl;
    else if (root1.imag()>0)
        cout<<"In real-imaginary form, Root one is: "<< root1.real() << " + " << root1.imag() << "j" << endl;
    
    if (root2.imag()==0)
        cout<<"In real-imaginary form, Root two is: "<< root2.real()<<endl;
    if (root2.imag()<0)
        cout<<"In real-imaginary form, Root two is: "<< root2.real() << root2.imag() << "j" << endl;
    else if (root2.imag()>0)
        cout<<"In real-imaginary form, Root two is: "<< root2.real() << " + " << root2.imag() << "j" << endl;
    
}

