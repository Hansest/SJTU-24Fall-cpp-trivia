#include <iostream>
using namespace std;

class CPU {
private:
    enum CPU_rank {p1 = 1, p2, p3, p4, p5, p6, p7};
    enum CPU_state {off, on};

    int rank, freq, state;
    double volt;
public:
    CPU(int r = p1, int f = 0, double v = 0.0, int st = off): rank(r), freq(f), state(st), volt(v) {
        cout << "Construction complete!" << endl;
    }
    ~CPU() {
        cout << "Destruction done!" << endl;
    }
    void run() {
        state = on;
        cout << "CPU is running now." << endl
             << "Rank: " << rank << endl
             << "Frequency: " << freq << "MHz" << endl
             << "Voltage: " << volt << "V" << endl;
    }
    void stop() {
        state = off;
        cout << "CPU stopped." << endl;
    }
};

int main() {
    int r, f;
    double v;
    cin >> r >> f >> v;
    CPU cpu1(r, f, v);
    cpu1.run();
    cpu1.stop();

    return 0;
}