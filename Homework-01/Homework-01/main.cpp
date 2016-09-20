//
//  main.cpp
//  Homework-01
//
//  Created by Daniel Portillo on 9/13/16.
//  Copyright © 2016 Daniel Portillo. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

//EX01_01
void ex02(){
    //a)
    bool hasPassedTest = true;
    //b)
    srand(time(0));
    int x = rand() % 100;
    int y = rand() % 100;
    
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    
    if (x > y){
        cout << "x > y \n";
    }
    if (x < y) {
        cout << "x < y \n";
    }
    if (x == y) {
        cout << "x = y \n";
    }
    //c)
    double numberOfShares;
    
    cout << "\nEnter Number of Shares: ";
    cin >> numberOfShares;
    if (numberOfShares < 100){
        cout << "that's less than 100 shares \n\n";
    }
    if (numberOfShares == 100) {
        cout << "that's 100 shares \n\n";
    }
    if (numberOfShares > 100) {
        cout << "that's more than 100 shares \n\n";
    }
    //d)
    int boxWidth;
    int bookWidth;
    
    cout << "Enter Box Width: ";
    cin >> boxWidth;
    cout << "\nEnter Book Width: ";
    cin >> bookWidth;
    
    if ((boxWidth % bookWidth) == 0) {
        cout << "Box Width is evenly divisible by Box Book Width. \n";
    }
    else{
        cout << "Box Width is not evenly divisible by Box Book Width. \n\n";
    }
    //e)
    int shelfLife;
    double temperature;
    
    cout << "\nEnter current shelf life in days: ";
    cin >> shelfLife;
    
    cout << "Enter temperature: ";
    cin >> temperature;
    
    if (temperature > 90) {
        cout << "New shelf life is " << shelfLife - 4 << endl;
    }
    else {
        cout << "New shelf life is " << shelfLife << endl;
    }
}
    //EX01_02
    void ex03(){
        //a)
        double area;
        
        cout << "Enter the area of a square: ";
        cin >> area;
        cout << "The diagonal of the square is " << sqrt(area) << endl;
        //b)
        char response;
        
        cout << "\nPlease enter yes [y] or no [n]: ";
        cin >> response;
        if (response == 'y') {
            cout << "yes\n";
        }
        if (response == 'n') {
            cout << "no\n";
        }
        //c)
        char tab = '\t';
        //d)
        string mailingAddress;
        
        cout << "\nPlease enter a mailing address:";
        cin >> mailingAddress;
        //e)
        string empty;
    }
    //EX01_3
    int doubler(int a){
        int b = 2 * a;
        return b;
    }
    int add(int num1, int num2) {
        int sum = num1 + num2;
        return sum;
    }
    void increment(int n){
        n++;
    }
    void ex04(){
        //a)
        int x;
        do {
            cout << "Please enter a number between 1 and 10: ";
            cin >> x;
        } while(x < 1 or x > 10);
        //b)
        double y = 0;
        
        for (int i = 1; i <= x; i++) {
            y += pow(i, 3);
        }
        cout << y << endl;
        //c)
        int k = 1;
        do {
            cout << '*' << endl;
            k++;
        } while(k <= x);
        //d)
        for (int i = 0; i <= 40; i++) {
            if ((i % 2) == 0) {
                cout << i << endl;
            }
        }
        //e)
        int d = doubler(x);
        cout << '\n' << d << endl;
        //f)
        srand(time(0));
        int s = rand() % 100;
        int t = rand() % 100;
        cout << s << '\n' << t << '\n' << add(s, t) << endl;
        //g)
        int m = 1;
        increment(m);
}
//EX01_04
    void printArray(int array[], int arraySize){
        for (int i = 0; i < arraySize; i++) {
            cout << array[i] << endl;
        }
    }

    void findNumber(int array[], int arraySize){
        int num;
        int hasNumber = 0;
        
        cout << "Enter a number: ";
        cin >> num;
        
        for (int i = 0; i < arraySize; i++) {
            if (num != array[i]) {
                hasNumber = 0;
            }
            else {
                hasNumber = 1;
            }
        }
        if (hasNumber == 1) {
            cout << "The array contains: " << num << endl;
        }
        if (hasNumber == 0) {
            cout << "The array does not contain: " << num << endl;
        }
    }
    void ex05(){
        //a)
        int a, b, c, d, e;
        int numbers [5] = {a, b, c, d, e};
        for (int i = 0; i < 5; i++) {
            cout << "Please enter an integer: ";
            cin >> numbers[i];
        }
        for (int i = 0; i < 5; i++) {
            cout << numbers[i] << endl;
        }
        //b)
        int sum = 0;
        for (int i = 0; i < 5; i++) {
            sum += numbers[i];
        }
     
        cout << "Sum:" << sum << endl;
        
        int product = numbers[0]*numbers[1]*numbers[2]*numbers[3]*numbers[4];
        cout << "Product:" << product << endl;
        //c)
        printArray(numbers, 5);
        //d)
        findNumber(numbers, 5);
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n\n";
    /*ex02();
    ex03();
    ex04();*/
    ex05();
    return 0;
}
