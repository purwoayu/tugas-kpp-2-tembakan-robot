// NAMA       : Purwo Ayu Sulis Tyaning Warni
// NRP        : 5010221061
// Jurusan    : Teknik Sistem dan Industri

#include <iostream>
#include <cmath>

using namespace std;

#define GRAVITASI 10 //10 m/s^2
#define START_PENGUKURAN 1 //pengukuran dimulai dari 1 meter
#define SUDUT 45 //sudut elevasi tembakan

int mencari_xmaks(int v_ta){
    return (pow(v_ta, 2) / 10);
}

float rumus_v_tan(int xmaks, int v_tan){
    int temp;
    temp = 0;
    if ((1 <= v_tan) && (v_tan <= 10)){
        temp = 1;
    } else if ((11 <= v_tan) && (v_tan <= 20)){
        temp = 3;
    } else if ((21 <= v_tan) && (v_tan <= 30)){
        temp = 5;
    }
    return sqrt(xmaks * GRAVITASI) + temp;
}

int speed_dgn_loss(int v_t){
    int temp;
    temp = 0;
    if ((1 <= v_t) && (v_t <= 10)){
        temp = 1;
    } else if ((11 <= v_t) && (v_t <= 20)){
        temp = 3;
    } else if ((21 <= v_t) && (v_t <= 30)){
        temp = 5;
    }
    return v_t - temp;
}

int main() {
    int v_tan;

    cin >> v_tan;
    if (v_tan <= 30){
        int n_x_maks = mencari_xmaks(speed_dgn_loss(v_tan));
        cout << n_x_maks <<" "<< rumus_v_tan(n_x_maks, v_tan);
    } else {
        return 0;
    }
    return 0;
}
