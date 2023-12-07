// Constructor.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <time.h>
#include <thread>
using namespace std;
//N1
class Counter {
    int min;
    int max;
public:
    Counter(int x, int y) {
        min = x;
        max = y;
    }
    void Set(int start, int end) {
        min = start;
        max = end;
    }
    void Running() {
        cout << "Result: ";
        for (int i = min; i <= max; i++) {
            
            this_thread::sleep_for(std::chrono::seconds(1));
            cout << i << " ";
           
            if (i  == max ) {
                i = min - 1;
                
               
            }
            
            
        }
        cout << "\n";
    }
    ~Counter() {

    }
    

};
//N2
class Elevator {
    int firstfloor;
    int lastfloor;
    int neededfloor;
public:
    Elevator(int x, int y, int a) {
        firstfloor = x;
        lastfloor = y;
        neededfloor = a;

        
    }
    void ElevSet(int first, int last, int need) {
        firstfloor = first;
        lastfloor = last;
        neededfloor = need;
    }
    void Moves() {
        while (firstfloor <= lastfloor) {
            this_thread::sleep_for(std::chrono::seconds(1));
            cout << "Now floor is: " << firstfloor << endl;
            firstfloor++;
            if (firstfloor == neededfloor) {
                cout << "There is floor: " << firstfloor << endl;
                break;
            }
           
        }
    }
    ~Elevator() {

    }


};



int main()
{
    Elevator elev(0, 0, 0);
    elev.ElevSet(1, 10, 6);
    elev.Moves();
    Counter obj(23, 4);
    obj.Set(10, 15);
    obj.Running();
    


    
}


