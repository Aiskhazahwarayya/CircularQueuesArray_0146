#include <iostream>
#include "C:/Users/Hp/AppData/Local/Temp/TFSTemp/vctmp2980_15781.CircularQueuesArray.f10d9665.cpp"
using namespace std;

class Queues {

	int FRONT, REAR, max = 5;
	int queue_array[5];

public:
    Queues() {
        FRONT = -1;
        REAR = -1;
    }

    void insert() {
        int num;
        cout << "Enter a number: ";
        cin >> num;
        cout << endl;

        if ((FRONT == 0 && REAR == max - 1) || (FRONT == REAR + 1)) {
            cout << "\nQueue overflow\n";
            return;
        }

        if (FRONT == -1) {
            FRONT = 0;
            REAR = 0;
        }

        else {
            if (REAR == max - 1)
                REAR = 0;
            else
                REAR = REAR + 1;
        }
        queue_array[REAR] = num;
    }
};

void remove() {
    if (FRONT == -1) {
        cout << "Queue underflow\n";
        return;
    }
    cout << "\nThe element deleted from the queue is: " << queue_array[FRONT] << "\n";

} 










