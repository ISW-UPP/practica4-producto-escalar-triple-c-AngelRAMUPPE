#include <iostream>
using namespace std;
int main() {
    int vector1[3], vector2[3], vector3[3];
    for (int i = 0; i < 3; i++) {
        cout << "Ingresa valores del primer arreglo: " << endl;
        cin >> vector1[i];
    }system("cls");
    for (int i = 0; i < 3; i++) {
        cout << "Ingresa valores del segundo arreglo: " << endl;
        cin >> vector2[i];
    }system("cls");
    for (int i = 0; i < 3; i++) {
        cout << "Ingresa valores del tercer arreglo: " << endl;
        cin >> vector3[i];
    }system("cls");int producto = 0;
    int prodCruz = (vector2[1] * vector1[0]) + (vector1[1] * vector2[2]) - (vector2[1] * vector3[2]);
    int vectorI = ((vector2[1] * vector3[2]) - (vector3[1] * vector2[2]));
    int vectorJ = ((vector1[1] * vector3[2]) - (vector3[1] * vector1[2]));
    int vectorK = ((vector2[1] * vector2[2]) - (vector2[1] * vector1[2]));
    int producto_Cruz_BxC = vectorI - vectorJ + vectorK;
    int producto_escalarA = ((vector2[1] * vector3[2]) - (vector3[1] * vector2[2])) * vector1[0];
    int producto_escalarB = ((vector1[1] * vector3[2]) - (vector3[1] * vector1[2])) * vector2[0];
    int producto_escalarC = ((vector1[1] * vector2[2]) - (vector2[1] * vector1[2])) * vector3[0];
    int producto_escalarTriple = producto_escalarA - producto_escalarB + producto_escalarC;
    cout << "El producto escalar triple es: " << producto_escalarTriple << endl;system("pause");
    //Angel Ruben Acosta Merino 2-A ISW
}
