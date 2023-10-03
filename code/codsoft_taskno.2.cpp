#include<iostream>
using namespace std;

double operation(char oprend,double num1,double num2,double result);

int main(){
	double num1,num2,result;
	char operand;
	cout<<"Enter num1: ";
	cin>>num1;
	cout<<"Enter num2: ";
	cin>>num2;
	cout<<"Enter the operation for the above numbers('+','-','*','/'): ";
	cin>>operand;
	if(operand == '+' || operand == '-' || operand == '*' || operand == '/'){
			result=operation(operand,num1,num2,result);
	 cout<<"Result is: "<<result;
	}
	else{
		cout <<"Error: Invalid operation.\n";
	
}
	}
double operation(char oprend,double num1,double num2,double result){
	switch (oprend) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                cout << "Error: Division by zero is not allowed." <<endl;
                return 0;
            }
            break;
        default:
            cout << "Error: Invalid operation." << endl;
            return 0;
    }
         return result;

}
