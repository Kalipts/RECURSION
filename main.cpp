// BAI TAP DE QUY
#include <iostream>
using namespace std;
// create by kalipts98
//Kiem tra xem mang co duoc sap xep tang dan hay khong
int isArraySortedOrder(int A[], int n) {
    if (n == 0)
        return 1;
    else
        return  (A[n-1] < A[n-2]) ? 0 : isArraySortedOrder(A,n-1);
}
// Tinh tong cua cac so trong mang
int sumOfAarray(int A[], int n) {
    if (n == 0)
        return 0;
    else
        return A[n-1] + sumOfAarray(A,n-1);
}
// Kiem tra xem mang co doi xung hay khong [1,2,3,3,2,1] or [1,2,3,2,1]
// Left la chi so di tu ben trai. right la chi so di tu ben phai
int isArraySymmetry(int Left, int Right, int A[]) {
    if (Right - Left < 0)
        return 1;
    else
        return A[Left] != A[Right] ? 0: isArraySymmetry(Left + 1, Right -1, A);
}
//Tim phan tu x trong mang xem no co chi so la bao nhieu

int findElemnet(int A[], int n, int x) {
    if (n == 0)
        return 0;
    else
        return (x == A[n-1]) ? (n - 1) : findElemnet(A,n-1,x);
}
// Tim phan tu lon nhat trong mang
int maxElement(int A[], int n) {
    if (n == 1)
        return A[0];
    else
        return A[n-1] > maxElement(A,n-1) ? A[n-1] : maxElement(A,n-1);
}
// tim uoc chung lon nhat
int greatestCommonDivisor(int a, int b) {
    if (a == b)
        return a;
    else
        if (a > b)
            greatestCommonDivisor(a -b, b);
        else
            greatestCommonDivisor(a, b - a);
}
// dem so chu so cua mot so nguyen duong

int countNumber(int n) {
    if (n  >= 0 && n <= 9)
        return 1;
    else
        return countNumber(n/10) + 1;
}

// fibonaci
int fibonacci(int n) {
    if (n == 1 || n == 2 )
        return 1;
    else
        return fibonacci(n-1) + fibonacci(n-2);
}
// thap ha noi

void HANOI_Tower(int n, char A, char B, char C) {
    if ( n == 1)
        cout << A << " ----- " << C << endl;
    else {
        HANOI_Tower(n-1,A,C,B);
        HANOI_Tower(1,A,B,C);
        HANOI_Tower(n-1,B,A,C);
    }

}
int main() {
    int n = 3;
    int A[n]={3,4,2};
    HANOI_Tower(2,'A','B','C');
    return 0;
}
